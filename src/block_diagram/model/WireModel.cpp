#include "WireModel.h"

#include "BlockModel.h"

WireModel::WireModel() {
    this->input = nullptr;
    this->transferred = false;
}

void WireModel::setInput(BlockModel *block) {
    this->input = block;
    block->setOutput(this);
}

void WireModel::addOutput(BlockModel *block) {
    this->outputs.push_back(block);
    block->setInput(this);
}

double WireModel::transferReliability() {
    if (this->transferred) {
        return this->transferredReliability;
    }

    this->transferredReliability = this->input->getReliability();
    this->transferred = true;
    
    return this->transferredReliability;
}

void WireModel::resetTransfer() {
    this->transferred = false;
}

