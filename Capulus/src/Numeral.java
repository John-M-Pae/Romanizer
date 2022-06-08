public class Numeral {
    int value;
    String symbol;

    public Numeral(String symbol, int value) {
        this.symbol = symbol;
        this.value = value;
    }

    public int value() {
        return value;
    }
    public String symbol() {
        return symbol;
    }
}
