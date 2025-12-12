public class test16 {
    public static void main(String[] args) {
        
        String str1 = new String("Subhendu ");
        String str2 = str1.concat("Kumar ");
        String str3 = str2.concat("Dutta");

        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str3);

        System.out.println(str1.hashCode());
        System.out.println(str2.hashCode());
        System.out.println(str3.hashCode());

        System.out.println();

        StringBuffer sb1 = new StringBuffer("Subhendu ");
        StringBuffer sb2 = sb1.append("Kumar ");
        StringBuffer sb3 = sb2.append("Dutta");

        System.out.println(sb1);
        System.out.println(sb2);
        System.out.println(sb3);

        System.out.println(sb1.hashCode());
        System.out.println(sb2.hashCode());
        System.out.println(sb3.hashCode());

    }
}