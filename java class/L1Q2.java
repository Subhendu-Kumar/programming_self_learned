import java.util.Scanner;
public class L1Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x;
        System.out.print("Enter second : ");
        x = sc.nextInt();
        int hour = x / 3600;
        int min = (x % 3600) / 60;
        int sec = (x % 3600) % 60;
        System.out.print("HH : MM : SS :: ");
        System.out.print(hour + " : " + min + " : " + sec);

    }
       
}
