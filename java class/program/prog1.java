import java.util.Scanner;

public class prog1 {
    static boolean allUnique(int arr[]){
        for (int i = 0; i < arr.length; i++) {
            for (int j = i+1; j < arr.length; j++){
                if (arr[i] == arr[j]){
                    return false;
                }
            }
        }
        return true;

    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array: ");
        int a = sc.nextInt();
        int[] arr = new int[a];
        System.out.println("Enter array elements: ");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        boolean x = allUnique(arr);
        if (x){
            System.out.println("array is unique: ");
        } else {
            System.out.println("array is not unique: ");
        }
        sc.close();
    }
}