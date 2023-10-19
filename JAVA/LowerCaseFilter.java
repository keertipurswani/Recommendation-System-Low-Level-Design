public class LowerCaseFilter extends DataPreprocessor {
    @Override
    public void preprocess(String data) {
        System.out.println("Preprocessing...Converting data to lowercase");
        // Can be done outside as well
        setNext(new RemoveStopWordsFilter());
        if (nextPreprocessor != null) {
            nextPreprocessor.preprocess(data);
        }
    }
}
