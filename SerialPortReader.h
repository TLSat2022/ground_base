//
// Created by szymon on 01/02/2022.
//

#ifndef GROUND_BASE_QT_SERIALPORTREADER_H
#define GROUND_BASE_QT_SERIALPORTREADER_H

#include <QByteArray>
#include <QSerialPort>
#include <QTextStream>

QT_BEGIN_NAMESPACE

QT_END_NAMESPACE

class SerialPortReader : public QObject {
    Q_OBJECT

public:
    explicit SerialPortReader(const QString& portName, QObject *parent = nullptr);
    void startConnection(const QString& portName);
    ~SerialPortReader();

signals:
    void handle_line(const QString&);

private slots:
    void handleReadRead();
    void handleError(QSerialPort::SerialPortError error);

private:
    QSerialPort m_port;
    QByteArray m_readData;
    QTextStream m_standarOutput;

};


#endif //GROUND_BASE_QT_SERIALPORTREADER_H
