#include "BlockModel.h"

BlockModel::BlockModel() {
    this->input = nullptr;
    this->output = nullptr;
}

WireModel *BlockModel::getInput() const {
    return this->input;
}

void BlockModel::setInput(WireModel *input) {
    this->input = input;
}

WireModel *BlockModel::getOutput() const {
    return this->output;
}

void BlockModel::setOutput(WireModel *output) {
    this->output = output;
}

