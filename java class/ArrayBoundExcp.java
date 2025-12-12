public class ArrayBoundExcp {
    public static void main(String[] args) {
        int[] numbers = new int[5];

        try {
            int value = numbers[10];
            System.out.println("Value at index 10: " + value);
        }
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Caught ArrayIndexOutOfBoundsException: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
