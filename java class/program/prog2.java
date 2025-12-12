import java.util.Scanner;
abstract class shape{
    abstract double area();
    abstract double perimeter();
}
class rectangle extends shape{
    private double length;
    private double breath;
    rectangle(double length , double breath){ this.length = length; this.breath = breath; }
    double area(){ return length * breath; }
    double perimeter(){ return 2*(length + breath); }
}
class square extends shape{
    private double side;
    square(double side){ this.side = side; }
    double area(){ return side * side; }
    double perimeter(){ return 4 * side; }
}
public class prog2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length and breath of Rectangle: ");
        double l = sc.nextDouble();
        double b = sc.nextDouble();
        shape rec = new rectangle(l, b);
        System.out.print("Enter side of square: ");
        double s = sc.nextDouble();
        shape sq = new square(s);
        System.out.println("Area of rectangle : " + rec.area());
        System.out.println("Perimeter of rectangle : " + rec.perimeter());
        System.out.println("Area of Square : " + sq.area());
        System.out.println("Perimeter of square : " + sq.perimeter());
        sc.close();
    }
}
