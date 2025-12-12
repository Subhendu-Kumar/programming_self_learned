class employee{
    String eid = "Sk1243";
    String ename ="Subhendu";
    int esalary = 50000;
    String e_email = "subhendukumardutta330@gmail.com";
    double emob = 7008116479d;
    public void getEmpDetails(){
        System.out.println("eid = "+eid);
        System.out.println("ename = "+ename);
        System.out.println("esalary = "+esalary);
        System.out.println("e_email = "+e_email);
        System.out.println("emob = "+emob);        
    }
}
public class test10 {
    public static void main(String[] args) {
        employee emp = new employee();
        emp.getEmpDetails();
    }
}
