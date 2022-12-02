QT       += core gui sql
QT       += core gui charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    available.cpp \
    bookroomdialog.cpp \
    employee1.cpp \
    homepage.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    roomoccupancy.cpp \
    signup.cpp \
    staffsearch.cpp

HEADERS += \
    available.h \
    bookroomdialog.h \
    employee1.h \
    homepage.h \
    mainwindow.h \
    menu.h \
    roomoccupancy.h \
    signup.h \
    staffsearch.h

FORMS += \
    available.ui \
    bookroomdialog.ui \
    employee1.ui \
    homepage.ui \
    mainwindow.ui \
    menu.ui \
    roomoccupancy.ui \
    signup.ui \
    staffsearch.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
