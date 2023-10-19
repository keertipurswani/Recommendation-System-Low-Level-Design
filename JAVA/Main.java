public class Main {
    public static void main(String[] args) {
        RecommendationSystem recommendationSystem = new RecommendationSystem();
        recommendationSystem.start();
        recommendationSystem.recommendForUser("user 1");
    }
}
