
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
 
public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int n;
        BigInteger b = new BigInteger("66");
        BigInteger c = new BigInteger("100");
        n = Integer.parseInt(br.readLine());
        for (int i = 0; i < n; i++) {
            BigInteger a = new BigInteger(br.readLine());
            System.out.println(b.modPow(a, c));
        }

    }
}
