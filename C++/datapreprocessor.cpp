#include "datapreprocessor.hpp"

void DataPreprocessor::setNext(DataPreprocessor* nextPreprocessor) {
    this->nextPreprocessor = nextPreprocessor;
}