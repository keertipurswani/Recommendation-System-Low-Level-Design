public class JSONDataIngestor extends DataIngestor {
    public JSONDataIngestor(String fileName) {
        System.out.println("Loading JSON file " + fileName);
    }

    @Override
    public void loadData() {
        System.out.println("Loading JSON Data!");
    }
}
