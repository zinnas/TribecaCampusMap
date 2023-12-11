QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    azhar.cpp \
    chambers.cpp \
    chen.cpp \
    errera.cpp \
    fiterman.cpp \
    fiterman9f.cpp \
    info.cpp \
    leung.cpp \
    login.cpp \
    main.cpp \
    maincampus.cpp \
    mainwindow.cpp \
    metekok.cpp \
    tang.cpp \
    wei.cpp

HEADERS += \
    azhar.h \
    chambers.h \
    chen.h \
    errera.h \
    fiterman.h \
    fiterman9f.h \
    info.h \
    leung.h \
    login.h \
    maincampus.h \
    mainwindow.h \
    metekok.h \
    tang.h \
    wei.h

FORMS += \
    azhar.ui \
    chambers.ui \
    chen.ui \
    errera.ui \
    fiterman.ui \
    fiterman9f.ui \
    leung.ui \
    login.ui \
    maincampus.ui \
    mainwindow.ui \
    metekok.ui \
    tang.ui \
    wei.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc
