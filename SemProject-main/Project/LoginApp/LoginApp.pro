QT       += core gui sql
QT       += core gui charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    homepage.cpp \
    incomeman.cpp \
    main.cpp \
    mainwindow.cpp \
    roomoccupancy.cpp \
    signup.cpp \
    staffmanage.cpp \
    staffsearch.cpp

HEADERS += \
    homepage.h \
    incomeman.h \
    mainwindow.h \
    roomoccupancy.h \
    signup.h \
    staffmanage.h \
    staffsearch.h

FORMS += \
    homepage.ui \
    incomeman.ui \
    mainwindow.ui \
    roomoccupancy.ui \
    signup.ui \
    staffmanage.ui \
    staffsearch.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
