//
// Created by szymon on 28/01/2022.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainwindow.h" resolved

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPortInfo>
#include <iostream>


mainwindow::mainwindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::mainwindow), reader("") {
    ui->setupUi(this);
    const auto infos = QSerialPortInfo::availablePorts();
    ui->ports->addItem("No ports chosen");
    for (const auto& info: infos) {
        ui->ports->addItem(info.portName());
    }
    connect(ui->ports, &QComboBox::currentIndexChanged, this, &mainwindow::activate_run_button);
    connect(&reader, &SerialPortReader::handle_line, this, &mainwindow::showRequest);

    m_series1 = new QLineSeries();
    m_series2 = new QLineSeries();

    for (int i = 0; i < 3; ++i) {
        m_series_gyro[i] = new QLineSeries();
    }


    for (int i = 0; i < 4; ++i) {
        m_charts[i] = new QChart();
    }

    m_charts[0]->legend()->hide();
    m_charts[0]->addSeries(m_series1);
    m_charts[0]->createDefaultAxes();
    m_charts[0]->setTitle("Temperature against time");
    m_charts[0]->setProperty("min", qInf());
    m_charts[0]->setProperty("max", -qInf());

    m_charts[1]->legend()->hide();
    m_charts[1]->addSeries(m_series2);
    m_charts[1]->createDefaultAxes();
    m_charts[1]->setTitle("Some random value that is showin up here");
    m_charts[1]->setProperty("min", qInf());
    m_charts[1]->setProperty("max", -qInf());

    m_charts[2]->legend()->show();
    m_charts[2]->addSeries(m_series_gyro[0]);
    m_charts[2]->addSeries(m_series_gyro[1]);
    m_charts[2]->addSeries(m_series_gyro[2]);
    m_charts[2]->createDefaultAxes();
    m_charts[2]->setTitle("Gyroscope");
    m_charts[2]->setProperty("min", qInf());
    m_charts[2]->setProperty("max", -qInf());

    ui->chart1->setChart(m_charts[0]);
    ui->chart1->setRenderHint(QPainter::Antialiasing);

    ui->chart2->setChart(m_charts[1]);
    ui->chart2->setRenderHint(QPainter::Antialiasing);

    ui->chart3->setChart(m_charts[2]);
    ui->chart3->setRenderHint(QPainter::Antialiasing);

    connect(m_series1, &QLineSeries::pointAdded, this, [this](int i){mainwindow::resizeChart(i, m_charts[0], m_series1);});
    connect(m_series2, &QLineSeries::pointAdded, this, [this](int i){mainwindow::resizeChart(i, m_charts[1], m_series2);});
    connect(m_series_gyro[0], &QLineSeries::pointAdded, this,
            [this](int i){mainwindow::resizeChart(i, m_charts[2], m_series_gyro[0]);});
    connect(m_series_gyro[1], &QLineSeries::pointAdded, this,
            [this](int i){mainwindow::resizeChart(i, m_charts[2], m_series_gyro[1]);});
    connect(m_series_gyro[2], &QLineSeries::pointAdded, this,
            [this](int i){mainwindow::resizeChart(i, m_charts[2], m_series_gyro[2]);});
}

mainwindow::~mainwindow() {
    delete ui;
}

void mainwindow::activate_run_button() {
    reader.startConnection(ui->ports->currentText());
}

void mainwindow::showRequest(const QString &s) {
    QList<QString> list = s.split(';');
    time++;
    m_series1->append(time, list.value(1).toFloat());
    m_series2->append(time, list.value(0).toFloat());
    m_series_gyro[0]->append(time, list.value(2).toFloat());
    m_series_gyro[1]->append(time, list.value(3).toFloat());
    m_series_gyro[2]->append(time, list.value(4).toFloat());
    ui->value1->setText(list.value(1));
    ui->value2->setText(list.value(0));
}

void mainwindow::resizeChart(int index, QChart* chart, QLineSeries* series) {
    qreal x = series->at(index).x();
    qreal y = series->at(index).y();

    auto yMax = chart->property("max").value<qreal>();
    auto yMin = chart->property("min").value<qreal>();

    if (y < yMin || y > yMax){
        if (y < yMin){
            yMin = y;
            chart->setProperty("min", y);
        }
        if (y > yMax){
            yMax = y;
            chart->setProperty("max", y);
        }
        chart->axes(Qt::Vertical).value(0)->setRange(yMin - 10, yMax + 10);
    }
    chart->axes(Qt::Horizontal).value(0)->setRange(x - 60, x + 1);
}
