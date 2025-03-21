#include "ConnectorModel.h"

#include "BlockModel.h"

ConnectorModel::ConnectorModel() {
    this->input = nullptr;
    this->transferred = false;
}

void ConnectorModel::setInput(BlockModel *block) {
    this->input = block;
}

void ConnectorModel::addOutput(BlockModel *block) {
    this->outputs.push_back(block);
}

double ConnectorModel::transferReliability() {
    if (this->transferred) {
        return this->transferredReliability;
    }

    this->transferredReliability = this->input->getReliability();
    this->transferred = true;
    
    return this->transferredReliability;
}

void ConnectorModel::resetTransfer() {
    this->transferred = false;
}

