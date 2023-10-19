public class RecommendationSystem {
    private DataIngestor dataIngestor;
    private DataPreprocessor preProcessor;
    private RecommendationEngine recommender;
    private FeedbackCollector feedbackCollector;

    public RecommendationSystem() {
        recommender = new RecommendationEngine();
        feedbackCollector = new FeedbackCollector();
        preProcessor = new LowerCaseFilter();
    }

    public void start() {
        dataIngestor = new JSONDataIngestor("test file");
        dataIngestor.loadData();
        preProcessor.preprocess("loaded data");
    }

    public void recommendForUser(String userId) {
        // Generate and display recommendations
        recommender.setRecommendationStrategy(new CollaborativeStrategy());
        recommender.generateRecommendations(userId);

        // Collect user feedback
        feedbackCollector.collect("user", "item1", true); // User liked item1
        feedbackCollector.collect("user", "item2", false); // User did not like item2
    }
}
