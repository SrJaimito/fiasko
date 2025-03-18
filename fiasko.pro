TEMPLATE = app
TARGET = fiasko

QT += core gui widgets

DESTDIR = bin
OBJECTS_DIR = build
MOC_DIR = build

INCLUDEPATH += src/block_diagram/view
INCLUDEPATH += src/block_diagram/model

HEADERS += src/block_diagram/view/BlockDiagramView.h \
           src/block_diagram/model/BlockModel.h \
           src/block_diagram/model/ConnectorModel.h

SOURCES += src/block_diagram/view/BlockDiagramView.cpp \
           src/block_diagram/model/BlockModel.cpp \
           src/block_diagram/model/ConnectorModel.cpp

SOURCES += src/main.cpp

