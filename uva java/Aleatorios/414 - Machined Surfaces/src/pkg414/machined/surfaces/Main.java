
import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {
//        Scanner sc = new Scanner(System.in);
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
     String cad;
     
     int n,con=0,min=10000;
     n=Integer.parseInt(br.readLine());
     while(n!=0){
              int v[]=new int[n];
     for (int i = 0; i < n; i++) {
            cad=br.readLine();
            cad=cad.trim();
            for (int j = 0; j < cad.length(); j++) {
                if (cad.charAt(j)==' ') {
                    con++;
                }
            }
            min=(int)Math.min(con,min);
            v[i]=con;
            con=0;
        }
        int sa=0;
        for (int i = 0; i < v.length; i++) {
            sa+=v[i]-min;
        }
        System.out.println(sa);
        con=0;
        min= 10000;
         n=Integer.parseInt(br.readLine());
     }

    }

}
