interface I{
    String a = "subhendu"; // by default public static final 
    int age = 19;          // by default public static final
    void m1();             // by default public abstract
    void m2();             // by default public abstract
}

class A implements I{
    public void m1(){
        System.out.println("I love her");
    }
    public void m2(){
        System.out.println("She also loves me");
    }
    public void m3(){
        System.out.println("We love each other");
    }
}

public class test12 {
    public static void main(String[] args) {
        // i x = new i(); // ---> error
        I x = new A();
        x.m1();
        x.m2();
        // x.m3(); // ---> error
        A y = new A();
        y.m1();
        y.m2();
        y.m3();
    }
}
