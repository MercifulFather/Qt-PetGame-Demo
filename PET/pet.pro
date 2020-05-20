#-------------------------------------------------
#
# Project created by QtCreator 2018-07-18T19:59:18
#
#-------------------------------------------------


QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PET
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        pet.cpp \
        n1.cpp \
    cat.cpp \
    home.cpp \
    outdoor.cpp \
    death.cpp

HEADERS += \
        pet.h \
        n1.h \
    cat.h \
    struct.h \
    home.h \
    outdoor.h \
    death.h

FORMS += \
        pet.ui \
        n1.ui \
        cat.ui \
    home.ui \
    outdoor.ui \
    death.ui

RESOURCES += \
    image.qrc \
    gif.qrc


