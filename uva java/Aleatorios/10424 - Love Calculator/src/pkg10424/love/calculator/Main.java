
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int cona = 0, conb = 0;
        String a, b;
        while (sc.hasNext()) {

            a = sc.nextLine();
            b = sc.nextLine();
            a = a.toLowerCase();
            b = b.toLowerCase();

            cona = me(a);
            conb = me(b);

            if (cona == 0 || conb == 0) {
                System.out.println("0.00 %");
            } else {
                double s = (double) ((Math.min(conb, cona)) / ((double) Math.max(conb, cona))) * 100;
//                if (s >= 100) {
//                    System.out.println("100.00 %");
//                } else {
                    System.out.printf("%.2f %%\n", s);

//                }
            }

        }

    }

    public static int me(String c) {
        String cad = "abcdefghijklmnopqrstuvwxyz";
        int con = 0;
        for (int i = 0; i < c.length(); i++) {
            for (int j = 0; j < cad.length(); j++) {
                if (c.charAt(i) == cad.charAt(j)) {
                    con += j + 1;
                }
            }
        }
        return me2(con);
    }

    public static int me2(int n) {
        String cad = String.valueOf(n);
        int suma = 0;
        while (true) {
            for (int i = 0; i < cad.length(); i++) {
                suma += Integer.parseInt(cad.charAt(i) + "");
            }
            cad = String.valueOf(suma);
            suma = 0;
            if (cad.length() == 1) {
                break;
            }
        }
        return Integer.parseInt(cad);
    }

}
