//
// Created by szymon on 01/02/2022.
//

#include <iostream>
#include <QCoreApplication>
#include "SerialPortReader.h"

SerialPortReader::SerialPortReader(const QString &portName, QObject *parent) : QObject(parent), m_standarOutput(stdout),
                                                                               m_port() {
    connect(&m_port, &QSerialPort::readyRead, this, &SerialPortReader::handleReadRead);
    connect(&m_port, &QSerialPort::errorOccurred, this, &SerialPortReader::handleError);
}


void SerialPortReader::handleReadRead() {
    QByteArray data = m_port.readAll();
    m_readData.append(data);
    if(m_readData.contains('\n')){
        emit this->handle_line(m_readData);
        m_readData = "";
    }
}

void SerialPortReader::handleError(QSerialPort::SerialPortError error) {

    if (error == QSerialPort::ReadError) {
        m_standarOutput << QObject::tr("An I/O error occurred while reading "
                                        "the data from port %1, error: %2")
                .arg(m_port.portName())
                .arg(m_port.errorString())
                         << Qt::endl;
        QCoreApplication::exit(1);
    }
}

void SerialPortReader::startConnection(const QString &portName) {
    m_port.setPortName(portName);
    m_port.setBaudRate(9600);

    if(!m_port.open(QIODevice::ReadWrite)){
        m_standarOutput << QObject::tr("[ERROR] There was a problem while connecting to the port %1;\n Error: %2")
        .arg(m_port.portName()).arg(m_port.errorString()) << Qt::endl;
    }
}

SerialPortReader::~SerialPortReader() {
    
}
