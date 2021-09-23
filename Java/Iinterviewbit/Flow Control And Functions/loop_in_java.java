import java.lang.*;
import java.util.*;

public class loop_in_java {
    public static void main(String[] args) {
        /***Don't change the code here***/
        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        inp.close();
        /***********************************/
        
        
        /***Your code goes here***/
        if (n>=1 && n<=100)
        {for (int i=1;i<=n;i++)
        {
            System.out.println(i);
        }
        }
        
    }
}