#include "ConnectorModel.h"

#include "BlockModel.h"

void ConnectorModel::setInput(BlockModel *block) {
    this->input = block;
}

void ConnectorModel::addOutput(BlockModel *block) {
    this->outputs.push_back(block);
}

double ConnectorModel::transferReliability() const {
    return this->input->getReliability();
}

