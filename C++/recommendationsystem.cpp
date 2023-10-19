#include "recommendationsystem.hpp"

void RecommendationSystem::start() {
    dataIngestor = new JSONDataIngestor("test file");
    dataIngestor->loadData();
    preProcessor->preprocess("loaded data");
}

void RecommendationSystem::recommendForUser(string userId) {
    // Generate and display recommendations
    recommender->setRecommendationStrategy(new CollaborativeStrategy());
    recommender->generateRecommendations(userId);

    // Collect user feedback
    feedbackCollector->collect("user", "item1", true); // User liked item1
    feedbackCollector->collect("user", "item2", false); // User did not like item2
}
