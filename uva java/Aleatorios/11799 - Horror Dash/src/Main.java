
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;



public class Main {

    
    public static void main(String[] args) throws IOException {

       BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
       int n;
       String cad="";
       n=Integer.parseInt(br.readLine());
        for (int i = 0; i < n; i++) {
            cad=br.readLine();
            String v[]=cad.split(" ");
            int v2[]=new int[v.length];
            for (int j = 0; j < v.length; j++) {
                v2[j]=Integer.parseInt(v[j]);
            }
            Arrays.sort(v2);
            System.out.println("Case "+(i+1)+": "+v2[v2.length-1]);
        }
    }
    
}
