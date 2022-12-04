QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addadmin.cpp \
    addinfo.cpp \
    daftarkp.cpp \
    editinfo.cpp \
    home.cpp \
    main.cpp \
    mainwindow.cpp \
    regist.cpp

HEADERS += \
    addadmin.h \
    addinfo.h \
    daftarkp.h \
    editinfo.h \
    home.h \
    mainwindow.h \
    regist.h

FORMS += \
    addadmin.ui \
    addinfo.ui \
    daftarkp.ui \
    editinfo.ui \
    home.ui \
    mainwindow.ui \
    regist.ui

TRANSLATIONS += \
    KP_id_ID.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

