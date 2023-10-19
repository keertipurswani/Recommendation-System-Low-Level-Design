#pragma once
#include "common.hpp"

class DataPreprocessor {
    protected:
        DataPreprocessor* nextPreprocessor;
    public:
        virtual void preprocess(string data) = 0;
        void setNext(DataPreprocessor* nextPreprocessor);
};

