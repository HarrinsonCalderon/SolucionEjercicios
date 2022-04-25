
import java.util.Arrays;
import java.util.Scanner;


public class Main {

    
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       int v[]=new int[3];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                v[j]=sc.nextInt();
            }
            Arrays.sort(v);
            System.out.println("Case "+(i+1)+": "+v[1]);
        }
    }
    
}
