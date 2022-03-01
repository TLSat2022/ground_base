cmake_minimum_required(VERSION 3.20)
project(ground_base_qt)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        SerialPort
        Charts
        REQUIRED)




qt_wrap_ui(qt_ui_files ui/mainwindow.ui)
add_executable(ground_base_qt main.cpp ${qt_ui_files} mainwindow.cpp mainwindow.h mainwindow.ui mainwindow.cpp mainwindow.h mainwindow.ui mainwindow.cpp mainwindow.h mainwindow.ui SerialPortReader.cpp SerialPortReader.h)
target_link_libraries(ground_base_qt
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::SerialPort
        Qt::Charts
        )

