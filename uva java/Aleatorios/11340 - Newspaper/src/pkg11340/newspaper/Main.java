
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
//        BufferedReader br=new BufferedReader (new InputStreamReader(System.in));
        int casos;
        double acu = 0.0;
        int a, b, va, line,ini;
        String cad = "", le;
        casos = sc.nextInt();
        for (int u = 0; u < casos; u++) {
            a = sc.nextInt();
            String letra[] = new String[a];
            int valor[] = new int[a];
            for (int i = 0; i < a; i++) {
                le = sc.next();
                ini = sc.nextInt();
                letra[i] = le;
                valor[i] = ini;
            }
          
            line =sc.nextInt();
            sc.nextLine();
            for (int i = 0; i < line; i++) {
                cad = sc.nextLine();
                for (int j = 0; j < cad.length(); j++) {
                    for (int k = 0; k < letra.length; k++) {
                        if (cad.charAt(j)==(letra[k].charAt(0))) {
                            acu += valor[k];
                        }
                    }
                }

            }
            acu = (double) acu / 100;
            System.out.printf("%.2f$\n", acu);

            acu = 0.0;
        }
    }

}
