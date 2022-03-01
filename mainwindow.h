//
// Created by szymon on 28/01/2022.
//

#ifndef GROUND_BASE_QT_MAINWINDOW_H
#define GROUND_BASE_QT_MAINWINDOW_H

#include <QMainWindow>
#include "SerialPortReader.h"
#include <QtCharts/QLineSeries>
#include <QtCharts/QChartView>

QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class mainwindow : public QMainWindow {
Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);

    ~mainwindow() override;
    void activate_run_button();
    void showRequest(const QString &s);
    void resizeChart(int, QChart*, QLineSeries*);

private:
    SerialPortReader reader;
    QLineSeries *m_series1;
    QLineSeries *m_series2;
    QLineSeries *m_series_gyro[3];
    QChart *m_charts[4];
    Ui::mainwindow *ui;
;
    int time = 0;
};


#endif //GROUND_BASE_QT_MAINWINDOW_H
