import java.util.*;
import java.io.*;

public class JavaLoops2 {
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        int sum = 0;
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            sum = a;
            for(int j=1; j<=n; j++){
                if(j==1){
                    sum+= b;
                }else{
                    b = b * 2;
                    sum += b;
                }
                System.out.print(sum + " ");
            }
            System.out.println();
        }
        in.close();
    }
}


