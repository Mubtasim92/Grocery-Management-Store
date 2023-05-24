
QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Grocery_Store_Management
TEMPLATE = app
CONFIG += c++11

SOURCES += \
    displayitems.cpp \
        main.cpp \
        mainwindow.cpp \
    additem.cpp \
    updateitem.cpp \
    spoileditems.cpp \
    mydb.cpp \
    solditems.cpp \
    expireditems.cpp \
    returneditems.cpp \
    availableitems.cpp \
    finditem.cpp

HEADERS += \
    displayitems.h \
        mainwindow.h \
    additem.h \
    updateitem.h \
    spoileditems.h \
    mydb.h \
    solditems.h \
    expireditems.h \
    returneditems.h \
    availableitems.h \
    finditem.h

FORMS += \
    displayitems.ui \
        mainwindow.ui \
    additem.ui \
    updateitem.ui \
    spoileditems.ui \
    solditems.ui \
    expireditems.ui \
    returneditems.ui \
    availableitems.ui \
    finditem.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
