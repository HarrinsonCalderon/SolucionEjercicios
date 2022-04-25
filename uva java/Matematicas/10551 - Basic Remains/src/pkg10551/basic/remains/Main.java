
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        while(true){
        n=sc.nextInt();
            if (n==0) {
                break;
            }
            BigInteger p=new BigInteger(sc.next(),n);
            BigInteger m=new BigInteger(sc.next(),n);
            String rta=(p.mod(m)).toString(n);
            System.out.println(rta);
        }
    }
}
