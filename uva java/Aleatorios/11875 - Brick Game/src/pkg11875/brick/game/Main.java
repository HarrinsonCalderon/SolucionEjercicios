
import java.util.Scanner;


public class Main {

  
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for (int i = 0; i < n; i++) {
            int a=sc.nextInt();
            int v[]=new int[a];
            for (int j = 0; j < a; j++) {
                v[j]=sc.nextInt();
            }
            System.out.println("Case "+(i+1)+": "+v[a/2]);
            
        }
    }
    
}
