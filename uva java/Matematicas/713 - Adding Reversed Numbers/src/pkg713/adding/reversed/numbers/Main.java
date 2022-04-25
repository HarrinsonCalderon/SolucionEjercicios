
import java.math.BigInteger;
import java.util.ArrayList;
 
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int c = sc.nextInt();
        StringBuilder a1, a2;
        while (c-- > 0) {
            a1 = new StringBuilder(sc.next());
            a2 = new StringBuilder(sc.next());
            a1 = a1.reverse();
            a2 = a2.reverse();

            BigInteger a = new BigInteger(a1.toString());
            BigInteger b = new BigInteger(a2.toString());
            StringBuilder rta = new StringBuilder(a.add(b).toString());
          
            rta=rta.reverse();
            String r=rta.toString();
            int it=0;
            for (int i = 0; i < r.length(); i++) {
                if (r.charAt(i)=='0') {
                    it++;
                }else{
                    break;
                }
            }
            if (it!=0) {
                r=r.substring(it);
            }
            System.out.println(r);
        }
    }
}
//subir 713