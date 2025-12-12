//method 1

class A{
    private static A a = null;
    private A(){
    }
    static A getRef(){
        if(a == null){
            a = new A();
        }
        return a;
    }
}
public class singletonClass1 {
    public static void main(String[] args) {
        A a1 = A.getRef(); 
        A a2 = A.getRef(); 
        A a3 = A.getRef();
        
        System.out.println(a1);;
        System.out.println(a2);;
        System.out.println(a3);;
    }
}
