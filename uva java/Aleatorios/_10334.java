 
package uva.java;
 
import java.math.BigInteger;
import java.util.Scanner;

public class _10334 {
  public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        BigInteger fibo[] = new BigInteger[1002];

        fibo[0] = BigInteger.valueOf(1);
        fibo[1] = BigInteger.valueOf(2);
        for (int i = 2; i < fibo.length; i++) {
            fibo[i] = fibo[i - 1].add(fibo[i - 2]);
        }
        while (sc.hasNext()) {
            n = sc.nextInt();
            System.out.println(fibo[n]);
        }
    }
}
