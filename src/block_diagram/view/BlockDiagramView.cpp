#include "BlockDiagramView.h"

BlockDiagramView::BlockDiagramView(QWidget *parent)
    : QGraphicsView(parent) {

    QGraphicsScene *scene = new QGraphicsScene();
    this->setScene(scene);
}

