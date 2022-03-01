#include <QApplication>
#include <QPushButton>
#include <QSerialPortInfo>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    mainwindow window;
    window.show();

    return QApplication::exec();
}
