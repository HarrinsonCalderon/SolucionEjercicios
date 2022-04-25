
import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        String ca;
        String a = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
        while (sc.hasNext()) {
            ca = sc.nextLine();
            for (int i = 0; i < ca.length(); i++) {
                if (ca.charAt(i) == ' ') {
                    System.out.print(" ");
                } else {
                    System.out.print(a.charAt(a.indexOf(ca.charAt(i)) - 1));
                }
            }
            System.out.println("");
        }

    }
}
