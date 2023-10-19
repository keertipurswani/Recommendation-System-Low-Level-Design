#pragma once
#include "common.hpp"
#include "userprofile.hpp"

class FeedbackCollector {
public:
    void collect(string user, string itemID, bool liked);
};

