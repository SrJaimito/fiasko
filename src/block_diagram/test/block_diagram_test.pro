TEMPLATE = app
TARGET = block_diagram_test

QT += core testlib

DESTDIR = bin
OBJECTS_DIR = build
MOC_DIR = build

HEADERS += ../model/BlockDiagramModel.h
HEADERS += ../model/BlockModel.h
HEADERS += ../model/ConnectorModel.h
HEADERS += ../model/ConstantBlockModel.h

SOURCES += ../model/BlockModel.cpp
SOURCES += ../model/ConnectorModel.cpp
SOURCES += ../model/ConstantBlockModel.cpp

SOURCES += BlockDiagramTest.cpp

