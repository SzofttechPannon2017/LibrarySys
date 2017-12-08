TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    user.cpp \
    publication.cpp \
    book.cpp \
    press.cpp

HEADERS += \
    user.h \
    publication.h \
    book.h \
    press.h
