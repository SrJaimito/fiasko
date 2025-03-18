#ifndef __BLOCK_MODEL_H__
#define __BLOCK_MODEL_H__

#include "ConnectorModel.h"

class BlockModel {

    ////////////////////////////////////////// Attributes

    private:
        ConnectorModel *input;
        ConnectorModel *output;

    ////////////////////////////////////////// Methods

    public:
        BlockModel();

        ConnectorModel *getInput() const;
        void setInput(ConnectorModel *input);

        ConnectorModel *getOutput() const;
        void setOutput(ConnectorModel *output);

        virtual double getReliability() const = 0;

};

#endif

