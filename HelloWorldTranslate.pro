QT += core
QT -= gui

TARGET = HelloWorldTranslate
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp
TRANSLATIONS = trans_id.ts

DISTFILES += \
    COPYING \
    README.md \
    INSTALL.md
