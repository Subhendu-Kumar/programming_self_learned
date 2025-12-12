import java.util.Scanner;

public class L1Q5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a , b , c;
        System.out.print("Enter a: ");
        a = sc.nextInt();
        System.out.print("Enter b: ");
        b = sc.nextInt();
        System.out.print("Enter c: ");
        c = sc.nextInt();
        if(a > b){
            if(b > c){
                System.out.print("Greatest is "+ a);
            }
            else{
                System.out.print("Greatest is "+ c);
            }
        }
        else{
            if(b > c){
                System.out.print("Greatest is "+ b);
            }
            else{
                System.out.print("Greatest is "+ c);
            }
        }
    
    }
    
}