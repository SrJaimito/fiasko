#ifndef __CONSTANT_BLOCK_MODEL_H__
#define __CONSTANT_BLOCK_MODEL_H__

#include "BlockModel.h"

class ConstantBlockModel: public BlockModel {

    ////////////////////////////////////////// Attributes

    private:
        double constant;
    
    ////////////////////////////////////////// Methods

    public:
        ConstantBlockModel(double constant = 1.0);

        double getConstant() const;
        void setConstant(double constant);

        double getReliability() const override;

};

#endif

