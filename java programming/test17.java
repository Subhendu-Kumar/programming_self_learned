//constructor overloading

class test{
    int i , j , k;
    test(){

    }
    test(int i1){
        i = i1;
    }
    test(int i1 , int j1){
        i = i1;
        j = j1;
    }
    test(int i1 , int j1 , int k1){
        i = i1;
        j = j1;
        k = k1;
    }
    void add(){
        System.out.println(i + j + k);
    }

}
public class test17 {
    public static void main(String[] args) {
        test t = new test();
        t.add();
        test t1 = new test(10);
        t1.add();
        test t2 = new test(10 , 20);
        t2.add();
        test t3 = new test(10 , 20 , 30);
        t3.add();
    }
    
}
