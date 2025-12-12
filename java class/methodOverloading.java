class A{
    void add(int i , int j){
        System.out.println("i + j = "+(i+j));
    }
    void add(float i , float j){
        System.out.println("i + j = "+(i+j));
    }
    void add(double i , double j){
        System.out.println("i + j = "+(i+j));
    }
    void add(String i , String j){
        System.out.println("i + j = "+(i+j));
    }
}

class methodOverloading{
    public static void main(String[] args) {
        A a = new A();
        a.add(5 , 6);
        a.add(9.6f , 6.8f );
        a.add(34.6767d , 78.9567d);
        a.add("I Love " , "You");

    }
}