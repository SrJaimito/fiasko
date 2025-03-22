#ifndef __BLOCK_MODEL_H__
#define __BLOCK_MODEL_H__

#include "WireModel.h"

class BlockModel {

    ////////////////////////////////////////// Attributes

    private:
        WireModel *input;
        WireModel *output;

    ////////////////////////////////////////// Methods

    public:
        BlockModel();

        WireModel *getInput() const;
        void setInput(WireModel *input);

        WireModel *getOutput() const;
        void setOutput(WireModel *output);

        virtual double getReliability() const = 0;

};

#endif

