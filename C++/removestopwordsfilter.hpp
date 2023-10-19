#pragma once
#include "DataPreprocessor.hpp"

class RemoveStopWordsFilter : public DataPreprocessor {
public:
    void preprocess(string data) override;
};

