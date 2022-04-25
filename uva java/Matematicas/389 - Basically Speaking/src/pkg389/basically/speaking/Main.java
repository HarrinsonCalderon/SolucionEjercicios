
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a, b, c;
        while (sc.hasNext()) {
            a = sc.next();
            b = sc.next();
            c = sc.next();
            String rta = (new BigInteger(a + "", Integer.parseInt(b))).toString(Integer.parseInt(c));
            if (rta.length() <= 7) {
               // System.out.println(7-rta.length());
                for (int i = 0; i < 7 - rta.length() ; i++) {
                    System.out.print(" ");
                }
                System.out.println(rta.toUpperCase());
            } else {
                System.out.print("  ERROR\n");
            }

        }

    }
}
