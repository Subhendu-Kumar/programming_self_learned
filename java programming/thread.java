import java.lang.Thread;

class newThread extends Thread {
    public void run(){
        for(int i = 0; i <= 5; i++){
            System.out.println("newThread : " + i);
        }
    }
}

public class thread {
    public static void main(String[] args) {
        newThread nt = new newThread();
        nt.start();
        for (int i = 0; i <= 5; i++){
            System.out.println("mainThread : " + i);
        }
    }
}
