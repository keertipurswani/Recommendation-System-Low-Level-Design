#pragma once
#include "UserProfile.hpp"
#include "recommendation.hpp"
#include "recommendationstrategy.hpp"

class RecommendationEngine {
    RecommendationStrategy* recommendationStrategy;
public:
    Recommendation* generateRecommendations(string user);
    void setRecommendationStrategy(RecommendationStrategy* pRecommendationStrategy) {
        recommendationStrategy = pRecommendationStrategy;
    }
};

