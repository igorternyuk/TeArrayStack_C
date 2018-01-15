TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    array_stack.c

QMAKE_CFLAGS += -std=c11

HEADERS += \
    array_stack.h
