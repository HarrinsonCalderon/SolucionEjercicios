
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
       
        criba((int) Math.sqrt(Integer.MAX_VALUE) * 10);

        while (true) {
            n = sc.nextInt();
            if (n == 0) {
                break;
            }
            obtener_factores(Math.abs(n));
            System.out.print(n + " = ");
            if (n < 0) {
                System.out.print("-1 x ");
            }
            for (int i = 0; i < lista_factores.size() - 1; i++) {
                System.out.print(lista_factores.get(i) + " x ");
            }
            System.out.print(lista_factores.get(lista_factores.size() - 1) + "\n");
        }

    }
    public static boolean[] a;
    public static List<Integer> lista_primos = new ArrayList<Integer>();
    public static List<Integer> lista_factores = new ArrayList<Integer>();

    public static void criba(int n) {
        a = new boolean[n + 1];

        for (int i = 0; i <= n; i++) {
            a[i] = true;
        }
        a[0] = false;
        a[1] = false;

        int limi = (int) Math.sqrt(n);
        for (int i = 2; i <= limi; i++) {
            for (int j = 2 * i; j <= n; j += i) {
                a[j] = false;
            }
        }

        for (int i = 1; i < a.length; i++) {
            if (a[i]) {
                lista_primos.add(i);
            }
        }
    }

    public static void obtener_factores(int n) {
        lista_factores.clear();
        int it = 0;
        int aux = 2;
        int aux2 = (int) Math.sqrt(n) + 1;

        while (n != 1 && aux < aux2) {
            while (n % aux == 0) {
                n /= aux;
                lista_factores.add(aux);
            }
            aux = lista_primos.get(it++);
        }
        if (n != 1) {
            lista_factores.add(n);
        }
    }

}
