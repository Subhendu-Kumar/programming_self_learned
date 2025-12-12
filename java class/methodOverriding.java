class polygon{
    void render(){
        System.out.println("Polygon is rendering.........");
    }
}

class circle extends polygon{
    void render(){
        System.out.println("Circle is rendering........");
    }
}

class square extends polygon{
    void render(){
        System.out.println("Square is rendering.........");
    }
}

class methodOverriding{
    public static void main(String[] args) {

        polygon p = new polygon();
        p.render();
        
        polygon circ = new circle();
        circ.render();

        polygon squ = new square();
        squ.render();

    }
}