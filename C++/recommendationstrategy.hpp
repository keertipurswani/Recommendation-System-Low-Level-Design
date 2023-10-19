#pragma once
#include "common.hpp"

class RecommendationStrategy {
    public:
        virtual void recommend(string userId) = 0;
};