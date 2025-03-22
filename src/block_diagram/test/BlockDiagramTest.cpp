#include <QTest>

#include "../model/ConstantBlockModel.h"
#include "../model/WireModel.h"

class BlockDiagramTest: public QObject {
    Q_OBJECT

    private slots:
        void testConstantBlocks();
};

void BlockDiagramTest::testConstantBlocks() {
    ConstantBlockModel b1(0.9);
    ConstantBlockModel b2(0.9);
    ConstantBlockModel b3(0.9);

    WireModel c1;
    c1.setInput(&b1);
    c1.addOutput(&b2);

    WireModel c2;
    c2.setInput(&b2);
    c2.addOutput(&b3);

    QCOMPARE(b3.getReliability(), 0.9 * 0.9 * 0.9);
}

QTEST_MAIN(BlockDiagramTest)
#include "BlockDiagramTest.moc"

