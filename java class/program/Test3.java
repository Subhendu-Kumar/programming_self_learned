import java.io.*;
public class Test3 {
    public static void main(String[] args) {
        if (args.length == 0) {
            System.out.println("Error:give Command: java Test3 <file_path>");
            return;
        }
        String file_Name = args[0];
        try (FileInputStream fis = new FileInputStream(file_Name)) {
            int size = fis.available();
            byte[] b = new byte[size];
            fis.read(b);
            
            int count = 0;
            for (int i = 0; i < size; i++) {
                if (Character.digit((char) b[i], 10) == 5) {
                    count++;
                }
            }
            String data = new String(b);
            System.out.println(data);
            System.out.println("occurrence of 5 is: " + count + " times");
        } catch (FileNotFoundException e) {
            System.err.println("File not found: " + file_Name);
        } catch (IOException e) {
            System.err.println("Error reading the file: " + e.getMessage());
        }
    }
}