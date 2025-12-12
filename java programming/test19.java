class A{
    static{
        System.out.println("SB-A");
    }
    static int i = m1();
    static int m1(){
        System.out.println("m1-A");
        return 10;
    }
    A(){
        System.out.println("A-con");
    }
    {
        System.out.println("IB-A");
    }
    int j = m2();
    int m2(){
        System.out.println("m2-A");
        return 20;
    }
}
public class test19{
    public static void main(String[] args) {
        A a1 = new A();
        A a2 = new A();
    }
}