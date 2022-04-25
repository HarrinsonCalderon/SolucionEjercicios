
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        for (int i = 0; i < n; i++) {
            String a = br.readLine();
            String b = br.readLine();
            boolean ban = false;
            System.out.print("Case " + (i + 1) + ":");
            if (a.equals(b)) {
                System.out.print(" Yes");
            } else if (a.replace(" ", "").equals(b.replace(" ", ""))) {

                System.out.print(" Output Format Error");

            } else {
                System.out.print(" Wrong Answer");

            }

            System.out.print("\n");
        }
    }
}
