#include <QGraphicsView>
#include <vector>

#include "BlockView.h"

class BlockDiagramView: public QGraphicsView {
    Q_OBJECT

    ////////////////////////////////////////// Attributes

    private:
        std::vector<BlockView *> blocks;

    ////////////////////////////////////////// Methods

    public:
        BlockDiagramView(QWidget *parent = nullptr);

    protected:
        void resizeEvent(QResizeEvent *event) override;
        void mousePressEvent(QMouseEvent *event) override;

};

