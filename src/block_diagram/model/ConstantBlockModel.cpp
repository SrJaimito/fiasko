#include "ConstantBlockModel.h"

ConstantBlockModel::ConstantBlockModel(double constant) {
    this->constant = constant;
}

double ConstantBlockModel::getConstant() const {
    return this->constant;
}

void ConstantBlockModel::setConstant(double constant) {
    this->constant = constant;
}

double ConstantBlockModel::getReliability() const {
    if (this->getInput() == nullptr) {
        return this->constant;
    }

    return this->constant * this->getInput()->transferReliability();
}

