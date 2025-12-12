abstract class A{
    void m1(){
        System.out.println("A-m1");
    }
    abstract void m2();
    abstract void m3();
}

class B extends A{
    void m2(){
        System.out.println("B-m2");
    }
    void m3(){
        System.out.println("B-m3");
    }
    void m4(){
        System.out.println("B-m4");
    }
}

public class test11 {
    public static void main(String[] args) {
        //A a = new A(); //--> error
        A a = new B();
        a.m1();
        a.m2();
        a.m3();
        // a.m4(); //--> error
        B b = new B();
        b.m1();
        b.m2();
        b.m3();
        b.m4();
    }
}