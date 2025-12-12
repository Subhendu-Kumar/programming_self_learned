class negativenumberException extends Exception{
    public negativenumberException(String message){
        super(message);
    }
}
public class test {
    public static void main(String[] args) {
        try{
            for (String arg : args) {
                int num = Integer.parseInt(arg);
                if (num < 0) {
                    throw new negativenumberException("negative number not allowed");
                }
                System.out.println("valid number : " + num);
            }
        } catch(negativenumberException e) {
            System.out.println("Error : " + e.getMessage());
        }    
    }
}