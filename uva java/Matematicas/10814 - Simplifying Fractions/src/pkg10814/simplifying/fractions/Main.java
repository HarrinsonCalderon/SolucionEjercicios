
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
         n=sc.nextInt();
        while(n-->0){
            BigInteger p=new BigInteger(sc.next());
            sc.next();
            BigInteger m=new BigInteger(sc.next());
            BigInteger gcd=p.gcd(m);
            //System.out.println("gcd "+ gcd );
            System.out.println(p.divide(gcd)+" / "+m.divide(gcd));
        }
    }
}
