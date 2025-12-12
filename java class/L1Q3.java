import java.util.Scanner;

public class L1Q3 {
    public static void main(String[] args) {
        int f1 = 0, f2 = 1, x, nextTerm;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the limit of the Fibonacci series: ");
        x = sc.nextInt();
        System.out.print("Fibonacci series: " + f1 + ", " + f2 + ", ");

        for (int i = 3; i <= x; i++) {
            nextTerm = f1 + f2;
            System.out.print(nextTerm + ", ");
            f1 = f2;
            f2 = nextTerm;
        }

    }
}