import java.util.Scanner;

public class Armstrong_num{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int num , sum = 0 , original;
		System.out.print("Enter your number: ");
		num = sc.nextInt();
		original = num;
		while(num > 0){
			int r = num % 10;
			sum += Math.pow(r , 3);
			num /= 10;
		}
		if(sum == original){
			System.out.print(original + " is a Armstrong number.");
		}
		else{
			System.out.print(original + " is not a Armstrong number.");
		}
	}
}