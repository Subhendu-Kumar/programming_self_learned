import java.util.Scanner;

public class L1Q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int limit , number = 1;
        System.out.print("Enter the limit : ");
        limit = sc.nextInt();
        for (int i = 0; i < limit; i++) {
            for (int j = 0; j < i + 1; j++) {
                System.out.print(number + " ");
                number++;
            }
            System.out.println();
        }
    }
    
}
