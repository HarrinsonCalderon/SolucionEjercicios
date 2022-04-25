
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k;
        String cad = "";
        double h, m, mAh = 0, ah = 0, am = 0;
        double salida = 0;
        while (true) {
            cad = sc.next();
            if (cad.equals("0:00")) {
                break;
            }
            String v[] = cad.split(":");
            h = Integer.parseInt(v[0]);
            m = Integer.parseInt(v[1]);
            mAh = (float) h + (m / 60);
            ah = mAh * 30;
            am = m * 6;
            salida = (float) (Math.max(am, ah) - Math.min(am, ah));
            if (salida >= 180) {
                salida = 360 - salida;
            }
            System.out.println(salida + "00");

        }

    }
}
