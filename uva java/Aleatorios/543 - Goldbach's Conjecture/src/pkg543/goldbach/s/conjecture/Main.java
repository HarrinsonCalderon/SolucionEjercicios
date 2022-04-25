
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        PrintWriter so = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        criba(1000001);
        Scanner sc = new Scanner(System.in);
        int a = 0, b = 0;
        int n = -1;
        boolean ban = false;
        /*  while (n != 0) {
            n = Integer.parseInt(br.readLine());

            for (int i =3; i <= n; i++) {
                if (primo[i]) {
                    a = i;
                    for (int j = i+1; j <= n; j++) {
                        if (primo[j]) {
                            b = j;
                            if (a + b == n) {

                                ban = true;
                                a = i;
                                b = j;
                                break;

                            }
                        }
                    }
                    if (ban) {
                       
                       so.println(n + " = " + a + " +" + " " + b);
                      
                        ban = false;
                       
                      
                        break;
                    }
                }
            }
        }
          so.close();*/
        int aux = 0;
        while (n != 0) {
            n = sc.nextInt();

            for (int i = 3; i <= n; i++) {
                aux =n-i;
                if (primo[i] && primo[aux]) {
                    so.println(n + " = " + i + " +" + " " + (aux));
                    break;
                }

            }
        }
        so.close(); 
    }
    static boolean primo[];

    public static void criba(int n) {
        primo = new boolean[n + 1];
        for (int i = 0; i <= n; i++) {
            primo[i] = true;
        }
        for (int p = 2; p * p <= n; p++) {
            if (primo[p]) {
                for (int i = p * 2; i <= n; i += p) {
                    primo[i] = false;
                }
            }
        }

    }
}
