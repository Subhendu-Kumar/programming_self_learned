import java.util.Scanner;

public class Calculator {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a , b;
        System.out.print("Enter a: ");
        a = sc.nextInt();
        System.out.print("Enter (+ , - , * , / , %): ");
        String choice = sc.next();
        System.out.print("Enter b: ");
        b = sc.nextInt();
        switch(choice){
            case "+" -> System.out.println("Addition : " + (a + b));
            case "-" -> System.out.println("Subtraction : " + (a - b));
            case "*" -> System.out.println("Multiplication : " + (a * b));
            case "/" -> System.out.println("Division : " + (a / b));
            case "%" -> System.out.println("modulus : " + (a % b));
            default -> System.out.println("Enter valid choice");
        }
    } 
}