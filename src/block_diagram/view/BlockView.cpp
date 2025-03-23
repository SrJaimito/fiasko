#include "BlockView.h"

#include <QGraphicsRectItem>

BlockView::BlockView(QGraphicsScene *scene, QPointF position) {
    scene->addRect(
        QRectF(position.x(), position.y(), 100, 50)
    );
}

