public class ArithmeticExceptionEx {
    public static void main(String[] args) {
        try {
            int result = 5 / 0;
            System.out.println("Result: " + result);
        }
        catch (ArithmeticException e) {
            System.out.println("Caught ArithmeticException: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
