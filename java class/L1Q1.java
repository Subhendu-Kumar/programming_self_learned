import java.util.Scanner;
public class L1Q1 {
    public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    int a , b;

    System.out.println("Enter a: ");
    a = sc.nextInt();

    System.out.println("Enter b :");
    b = sc.nextInt();
    
    System.out.println("Addition : " + (a+b));
    System.out.println("Multiplication : " + (a*b));
    System.out.println("Subtraction : " + (a-b));
    System.out.println("Division : " + (a/b));
    System.out.println("Modulus : " + (a%b));

    }
}
