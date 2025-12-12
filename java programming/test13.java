class A{
    void m1(int i , int j){
        System.out.print("Addition : ");
        System.out.println(i + j);
    } // normal method

    void m2(int ...a){
        System.out.println("Number of arguments : "+ a.length);
        int sum = 0;
        System.out.print("Argument list : ");
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i]+" ");            
            sum += a[i];
        }
        System.out.println();
        System.out.println("Addition : "+ sum);
        System.out.println("------------------------------");
    } // var-arg method
}


public class test13 {
    public static void main(String[] args) {
        A x = new A();
        x.m1(10, 20);
        
        x.m2(10);
        x.m2(10 , 20);
        x.m2(10 , 20 , 30);
    }
}
