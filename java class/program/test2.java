class Box {
    double cost;
    Box(double cost){
        this.cost = cost;
    }
    void displayCost(){
        System.out.println("Cost of Box : " + cost);
    }
}
class BoxWeight extends Box {
    double weight;
    BoxWeight(double cost , double weight){
        super(cost);
        this.weight = weight;
    }
    void displayWeight(){
        System.out.println("Weight of Box : " + weight);
    }
}
class BoxVolume extends BoxWeight {
    double volume;
    BoxVolume(double cost , double weight , double volume){
        super(cost, weight);
        this.volume = volume;
    }
    void displayVolume(){
        System.out.println("Volume of Box : " + volume);
    }
}
public class test2 {
    public static void main(String[] args) {
        BoxVolume myBox = new BoxVolume(100 , 5 , 50);
        myBox.displayCost();
        myBox.displayWeight();
        myBox.displayVolume();
    }
}