import java.lang.*;
import java.util.*;

public class Operators {
    public static void main(String[] args) {
    
    /*** reading line for intut ***/
        Scanner inp = new Scanner(System.in);
        int a = inp.nextInt();
        inp.nextLine();
        int b = inp.nextInt();
        inp.nextLine();
        inp.close();
    /*********************************/
    
    /* operators demo */
        
        int add;
        int sub;
        int multi;
        int div;

        add=a+b;
        sub=a-b;
        multi=a*b;
        div=a/b;
        
    /***********************/
    
    /******printing  the all action puformed  ******/
        System.out.println(add);
        System.out.println(sub);
        System.out.println(multi);
        System.out.println(div);
    
    }
}