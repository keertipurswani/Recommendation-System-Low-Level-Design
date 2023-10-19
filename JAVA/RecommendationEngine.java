public class RecommendationEngine {
    private RecommendationStrategy recommendationStrategy;

    public Recommendation generateRecommendations(String userId) {
        recommendationStrategy.recommend(userId);
        return null; // You need to return a Recommendation object here
    }

    public void setRecommendationStrategy(RecommendationStrategy recommendationStrategy) {
        this.recommendationStrategy = recommendationStrategy;
    }
}
