#pragma once
#include "DataPreprocessor.hpp"
#include "removestopwordsfilter.hpp"

class LowerCaseFilter : public DataPreprocessor {
public:
    void preprocess(string data) override;
};

