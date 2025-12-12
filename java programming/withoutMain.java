//possible upto java6 versions........

// class withoutMain{
//     static int i = m1();
//     static int m1(){
//         System.out.println("I Love You.....");
//         System.exit(0);
//         return 10;
//     }
// }

//Another way....

// class withoutMain{
//     static{
//         System.out.println("I Love You......");
//         System.exit(0);
//     }
// }

//Another way....

class withoutMain {
    static Object obj = new Object() {
        {
            System.out.println("Welcome To durga Software Solutions");
            System.exit(0);// TO termiante the application.
        }
    };
}