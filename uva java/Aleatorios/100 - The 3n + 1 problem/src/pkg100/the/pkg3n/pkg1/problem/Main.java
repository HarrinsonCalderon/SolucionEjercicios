
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        String a,b,a1="",b1="",suma="",sa="";
        n=sc.nextInt();
        while(n-->0){
            a=sc.next();
            b=sc.next();
            for (int i = a.length()-1; i >=0; i--) {
                a1+=a.charAt(i)+"";
            }
            for (int i = b.length()-1; i >=0; i--) {
                b1+=b.charAt(i)+"";
            }
//            System.out.println(a1);
//            System.out.println(b1);
            suma=(Integer.parseInt(a1)+Integer.parseInt(b1))+"";
            
            
                    
            boolean ban=false;
            for (int i = suma.length()-1; i >=0; i--) {
                if (suma.charAt(i)!='0') {
                    ban=true;
                }
                if (ban) {
                    sa+=suma.charAt(i);
                }
            }
            System.out.println(sa);
            suma="";
            sa="";
            a1="";
            b1="";
            
        }

    }

}
