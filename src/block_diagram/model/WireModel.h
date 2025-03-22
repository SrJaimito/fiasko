#ifndef __Wire_MODEL_H__
#define __Wire_MODEL_H__

#include <vector>

class BlockModel;

class WireModel {

    ////////////////////////////////////////// Attributes

    private:
        BlockModel *input;
        std::vector<BlockModel *> outputs;

        double transferredReliability;
        bool transferred;

    ////////////////////////////////////////// Methods

    public:
        WireModel();

        void setInput(BlockModel *block);
        void addOutput(BlockModel *block);

        double transferReliability();
        void resetTransfer();

};

#endif

