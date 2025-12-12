class oddThread extends Thread{
    public void run(){
        System.out.print("printing odd numbers :");
        for (int i = 1; i <= 20; i++) {
            if (i % 2 == 1) {
                System.out.print(" " + i);
            }
        }
    }
}
class evenThread extends Thread{
    public void run(){
        System.out.println();
        System.out.print("printing even numbers :");
        for (int i = 1; i <= 20; i++) {
            if (i % 2 == 0) {
                System.out.print(" " + i);
            }
        }
    }
}
public class thread {
    public static void main(String[] args) throws InterruptedException {
        oddThread otd = new oddThread();
        evenThread etd = new evenThread();
        otd.start();
        Thread.sleep(10);
        etd.start();
    }
}
