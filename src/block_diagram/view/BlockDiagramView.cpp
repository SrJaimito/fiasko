#include "BlockDiagramView.h"

#include <QVBoxLayout>
#include <QMouseEvent>

#include "BlockView.h"

BlockDiagramView::BlockDiagramView(QWidget *parent)
    : QGraphicsView(parent) {

    this->setScene(new QGraphicsScene());

    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

void BlockDiagramView::resizeEvent(QResizeEvent *event) {
    int width = event->size().width();
    int height = event->size().height();

    this->setSceneRect(0, 0, width, height);
}

void BlockDiagramView::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::RightButton) {
        QPointF position = this->mapToScene(event->position().toPoint());
        this->blocks.push_back(
            new BlockView(this->scene(), position)
        );
    }
}

