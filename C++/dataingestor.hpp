#pragma once
#include "common.hpp"

using namespace std;

class DataIngestor {
protected:
    vector<pair<string, string>> loadItems();
public:
    virtual void loadData() = 0;
};

