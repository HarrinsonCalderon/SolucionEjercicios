
import java.util.Scanner;

public class Main {

    public static void cribadeEratostenes(int n) {
        boolean primo[] = new boolean[n + 1];
        for (int i = 0; i <= n; i++) {
            primo[i] = true;
        }
        for (int p = 2; p * p <= n; p++) { // Si el primo[p] no cambia, entonces es primo if (primo[p] == true) { // Actualiza todos los múltiplos de p for (int i = p * 2; i <= n; i += p) { primo[i] = false; } } }
            for (int i = 2; i <= n; i++) {
                if (primo[i] == true) {
                    System.out.print(i + " ");
                }
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        int a;
        n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            a = sc.nextInt();
            if (isprime(a)) {
                System.out.println("Prime");
            } else {
                System.out.println("Not Prime");
            }
        }
        //1

    }

}
