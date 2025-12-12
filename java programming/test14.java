class AB{
    // overriding toString();
    public String toString(){
        return "I LOVE YOU >>>>>>";
    }
}

public class test14 {
    public static void main(String[] args) {
        AB a = new AB();
        // int hc = a.hashCode();
        // String ref = a.toString();
        // System.out.println("hashCode             :"+hc);
        // System.out.println("referanceVariable  :"+ref);
        System.out.println(a); // JVM internally calls toString() ;
    }    
}
