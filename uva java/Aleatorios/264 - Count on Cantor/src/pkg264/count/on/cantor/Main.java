
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int n = sc.nextInt();
            int d = (int) Math.floor(Math.sqrt(1 + 8 * n) - 1) / 2;
            int a = n * (d - 1);
            int b = n - (a + 1) * a / 2;
            if (a % 2 == 0) {
                System.out.println("TERM " + n + " IS " + () + "/" + (a - 1 - b));
            } else {
                System.out.println("TERM " + n + " IS " + (a+1-b) + "/" + (b));

            }

        }
    }

}
