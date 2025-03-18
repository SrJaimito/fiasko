#include "BlockModel.h"

BlockModel::BlockModel() {
    this->input = nullptr;
    this->output = nullptr;
}

ConnectorModel *BlockModel::getInput() const {
    return this->input;
}

void BlockModel::setInput(ConnectorModel *input) {
    this->input = input;
}

ConnectorModel *BlockModel::getOutput() const {
    return this->output;
}

void BlockModel::setOutput(ConnectorModel *output) {
    this->output = output;
}

