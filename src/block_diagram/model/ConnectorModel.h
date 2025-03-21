#ifndef __CONNECTOR_MODEL_H__
#define __CONNECTOR_MODEL_H__

#include <vector>

class BlockModel;

class ConnectorModel {

    ////////////////////////////////////////// Attributes

    private:
        BlockModel *input;
        std::vector<BlockModel *> outputs;

        double transferredReliability;
        bool transferred;

    ////////////////////////////////////////// Methods

    public:
        ConnectorModel();

        void setInput(BlockModel *block);
        void addOutput(BlockModel *block);

        double transferReliability();
        void resetTransfer();

};

#endif

