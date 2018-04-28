QT += core gui widgets network

RC_ICONS = icon/fdp.ico

TARGET = FDPFinder4000


SOURCES += \
        main.cpp \
        mainwindow.cpp \
        apimanager.cpp \
        user.cpp \
        saveconfig.cpp
        apimanager.cpp

HEADERS += \
        mainwindow.h \
        apimanager.h \
        user.h \
        saveconfig.h
        apimanager.h

FORMS += \
        mainwindow.ui

CONFIG += c++14
