public class Romanize {
    public static void main(String[] args) {
        int userValue = conversation.askUserForValue();

        String valueAsNumeral = toNumeral(userValue);

        conversation.tellUserResult(valueAsNumeral);
    }

    private static String toNumeral(int value) {
        if (value == 0) {
            return zero.symbol();
        }
        else {
            return cascade(value);
        }
    }

    private static String cascade(int value) {
        int num = value;
        StringBuilder result = new StringBuilder();

        for (Numeral currNumeral : nonZeroNumerals) {
            while (num >= currNumeral.value()) {
                num -= currNumeral.value();
                result.append(currNumeral.symbol());
            }
        }

        return result.toString();
    }

    private static final Numeral zero = new Numeral("Z", 0);
    private static final Numeral[] nonZeroNumerals = {
            new Numeral("M", 1000),
            new Numeral("CM", 900),
            new Numeral("D", 500),
            new Numeral("CD", 400),
            new Numeral("C", 100),
            new Numeral("XC", 90),
            new Numeral("L", 50),
            new Numeral("XL", 40),
            new Numeral("X", 10),
            new Numeral("IX", 9),
            new Numeral("V", 5),
            new Numeral("IV", 4),
            new Numeral("I", 1)
    };

    private static final UserConversation conversation = new UserConversation();
}
