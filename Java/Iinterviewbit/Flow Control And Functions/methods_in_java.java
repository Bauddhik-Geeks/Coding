import java.lang.*;
import java.util.*;

public class methods_in_java {
    public static void main(String[] args) {
        
        /*Dont't touch the code in this block*/
        Scanner inp = new Scanner(System.in);
        int a = inp.nextInt();
        inp.nextLine();
        int b = inp.nextInt();
        inp.nextLine();
        inp.close();
        System.out.println(add(a,b));
        System.out.println(multiply(a,b));
        /*******************************************/
    }
    
    //Your code goes here
   
    public static int add(int n1,int n2)
    {
        int c= n1 + n2;
        return c;
    }
   
   
    public static int multiply(int n3,int n4)
    {
        int d= n3 * n4;
        return d;
    }

}