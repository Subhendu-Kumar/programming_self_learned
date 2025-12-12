class factorial {
    int fact(int n) {
        if (n == 0) {
            return 1;
        }
        return n * fact(n - 1);
    }
}
class combination extends factorial {
    int combi(int n, int r) {
        if(r > n){
            return 0;
        }
        return fact(n) / (fact(r) * fact(n - r));
    }
}
public class Main {
    public static void main(String args[]) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.println("Enter upper and lower values to calculate combination(nCr):: ");
        System.out.print("Enter n: ");
        int n = sc.nextInt();
        System.out.print("Enter r: ");
        int r = sc.nextInt();
        combination c = new combination();
        int nCr = c.combi(n, r);
        if(nCr == 0){
            System.out.println("Error: can't evaluate combination : r <= n (must)");
        } else {
        System.out.println(n + "C" + r + " = " + nCr);
        }
        sc.close();
    }
}