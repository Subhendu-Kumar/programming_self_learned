public class test1 {
    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.println("Enter a sentence :");
        char[] str = sc.nextLine().toCharArray();
        System.out.print("Enter the letter to find its occurance: ");
        char c = sc.next().charAt(0);
        int count = 0;
        for (int i = 0; i < str.length; i++) {
            if (c == str[i]) {
                count++;
            }
        }
        System.out.println("occurance of " + c + " is " + count + " times.");
        sc.close();
    }    
}
