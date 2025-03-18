#include <QWidget>
#include <QGraphicsView>

class BlockDiagramView: public QGraphicsView {
    Q_OBJECT

    ////////////////////////////////////////// Attributes

    ////////////////////////////////////////// Methods

    public:
        explicit BlockDiagramView(QWidget *parent = nullptr);
};

