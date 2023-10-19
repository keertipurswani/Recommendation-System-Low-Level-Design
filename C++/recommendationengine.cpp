#include "RecommendationEngine.hpp"
#include "recommendation.hpp"

Recommendation* RecommendationEngine::generateRecommendations(string userId) {
    recommendationStrategy->recommend(userId);
}
