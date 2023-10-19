public class XMLDataIngestor extends DataIngestor {
    public XMLDataIngestor(String fileName) {
        System.out.println("Loading XML file " + fileName);
    }

    @Override
    public void loadData() {
        System.out.println("Loading XML Data!");
    }
}
