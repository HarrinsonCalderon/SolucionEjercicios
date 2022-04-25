
import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, con = 0;
        a = sc.nextInt();
        b = sc.nextInt();

        while (a != 0 && b != 0) {

            int ja[] = new int[a];
            int ji[] = new int[b];
            for (int i = 0; i < a; i++) {
                ja[i] = sc.nextInt();
            }
            for (int i = 0; i < b; i++) {
                ji[i] = sc.nextInt();
            }

            for (int j = 0; j < ji.length; j++) {
                if (Arrays.binarySearch(ja, ji[j]) >= 0) {
                    con++;
                }

            }

            System.out.println(con);
            con = 0;
            a = sc.nextInt();
            b = sc.nextInt();
        }

    }
}
