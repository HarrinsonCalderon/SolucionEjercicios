
import java.io.BufferedReader;
import java.util.Scanner;

public class Main {

    static public int m(String n) {
        int acu = 0;
        String v[] = n.split("");
        for (int i = 0; i < v.length; i++) {
            acu += (int) Math.pow(Integer.parseInt(v[i]), 2);
        }
        return acu;
    }

    public static void main(String[] args) {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);
        String n, aux;
        int it = 1, c;
        c = sc.nextInt();
        for (int i = 0; i < c; i++) {
            n = sc.next();
            aux = n;
            while (true) {
                n = m(n) + "";
                if (n.equals("1")) {
                    System.out.println("Case #" + it + ": " + aux + " is a Happy number.");
                    break;
                } else if (n.equals(aux)) {
                    System.out.println("Case #" + it + ": " + aux + " is an Unhappy number.");
                    break;
                }
            }
            it++;
        }
    }

}
