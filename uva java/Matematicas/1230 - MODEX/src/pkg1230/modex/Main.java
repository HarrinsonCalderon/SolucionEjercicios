
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int c;
    c=sc.nextInt();
    while(c-->0){
        BigInteger x=new BigInteger(sc.next());
        BigInteger y=new BigInteger(sc.next());
        BigInteger n=new BigInteger(sc.next());
        System.out.println(x.modPow(y, n));
    }
    sc.nextInt();
}
}