public class RemoveStopWordsFilter extends DataPreprocessor {
    @Override
    public void preprocess(String data) {
        // In a real system, you would remove stop words here.
        // For this example, we will simply print a message.
        System.out.println("Preprocessing...Stop words removed.");

        if (nextPreprocessor != null) {
            nextPreprocessor.preprocess(data);
        }
    }
}
