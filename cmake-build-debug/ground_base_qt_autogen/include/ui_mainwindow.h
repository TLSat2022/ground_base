/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QComboBox *ports;
    QGridLayout *gridLayout;
    QChartView *chart1;
    QChartView *chart2;
    QChartView *chart4;
    QChartView *chart3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *title1;
    QLabel *value1;
    QVBoxLayout *verticalLayout_4;
    QLabel *title2;
    QLabel *value2;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        mainwindow->resize(1076, 722);
        centralwidget = new QWidget(mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ports = new QComboBox(centralwidget);
        ports->setObjectName(QString::fromUtf8("ports"));

        verticalLayout->addWidget(ports);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        chart1 = new QChartView(centralwidget);
        chart1->setObjectName(QString::fromUtf8("chart1"));

        gridLayout->addWidget(chart1, 0, 0, 1, 1);

        chart2 = new QChartView(centralwidget);
        chart2->setObjectName(QString::fromUtf8("chart2"));

        gridLayout->addWidget(chart2, 0, 1, 1, 1);

        chart4 = new QChartView(centralwidget);
        chart4->setObjectName(QString::fromUtf8("chart4"));

        gridLayout->addWidget(chart4, 1, 1, 1, 1);

        chart3 = new QChartView(centralwidget);
        chart3->setObjectName(QString::fromUtf8("chart3"));

        gridLayout->addWidget(chart3, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);

        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        title1 = new QLabel(centralwidget);
        title1->setObjectName(QString::fromUtf8("title1"));

        verticalLayout_3->addWidget(title1);

        value1 = new QLabel(centralwidget);
        value1->setObjectName(QString::fromUtf8("value1"));

        verticalLayout_3->addWidget(value1);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        title2 = new QLabel(centralwidget);
        title2->setObjectName(QString::fromUtf8("title2"));

        verticalLayout_4->addWidget(title2);

        value2 = new QLabel(centralwidget);
        value2->setObjectName(QString::fromUtf8("value2"));

        verticalLayout_4->addWidget(value2);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        mainwindow->setCentralWidget(centralwidget);

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "mainwindow", nullptr));
        title1->setText(QCoreApplication::translate("mainwindow", "Temperature:", nullptr));
        value1->setText(QCoreApplication::translate("mainwindow", "0", nullptr));
        title2->setText(QCoreApplication::translate("mainwindow", "Some value: ", nullptr));
        value2->setText(QCoreApplication::translate("mainwindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
