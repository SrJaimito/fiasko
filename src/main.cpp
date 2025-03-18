#include <QApplication>

#include "BlockDiagramView.h"

int main (int argc, char *argv[]) {
    QApplication app(argc, argv);

    BlockDiagramView blockDiagramView;
    blockDiagramView.show();

    return app.exec();
}

