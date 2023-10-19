#pragma once
#include "common.hpp"

class Recommendation
{
        vector<string> items;
        string context;
    public:
        Recommendation(vector<string> items);
        void setContext(string context);
        void display();
};
