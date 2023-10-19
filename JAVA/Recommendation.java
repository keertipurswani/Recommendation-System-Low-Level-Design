import java.util.List;

public class Recommendation {
    private List<String> items;
    private String context;

    public Recommendation(List<String> items) {
        this.items = items;
    }

    public void setContext(String context) {
        this.context = context;
    }

    public void display() {
        System.out.print("Items: ");
        for (String item : items) {
            System.out.print(item + " ");
        }
        System.out.println();

        if (context != null && !context.isEmpty()) {
            System.out.println("Context: " + context);
        }
    }
}
