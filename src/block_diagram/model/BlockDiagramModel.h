#ifndef __BLOCK_DIAGRAM_MODEL_H__
#define __BLOCK_DIAGRAM_MODEL_H__

#include <vector>

#include "BlockModel.h"
#include "WireModel.h"

class BlockDiagramModel {

    ////////////////////////////////////////// Attributes

    private:
        std::vector<BlockModel *> blocks;
        std::vector<WireModel *> wires;

    ////////////////////////////////////////// Methods

    public:
        ~BlockDiagramModel();

        void addBlock(BlockModel *block);
        void removeBlock(BlockModel *block);

        void addWire(WireModel *wire);
        void removeWire(WireModel *wire);

};

#endif

