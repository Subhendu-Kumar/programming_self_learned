public class test15 {
    public static void main(String[] args) {
        String str = new String("Subhendu Kumar Dutta");
        System.out.println(str);
        Exception exp = new Exception("my own exception", null);
        System.out.println(exp);
        Thread th = new Thread(null, null, str, 0, false);
        System.out.println(th);
        
    }
    
}
