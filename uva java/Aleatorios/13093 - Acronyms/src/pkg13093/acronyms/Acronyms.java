
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Acronyms {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);
        String a, b, c = "", d = "";
        int con = 0;
         while (true) {

        a = br.readLine();
        b = br.readLine();
        String v1[] = a.split(" ");
        String v2[] = b.split(" ");
        if (v1.length == v2.length) {

            for (int i = 0; i < v1.length; i++) {
                c += v1[i].charAt(0);
                d += v2[i].charAt(0);
            }

        }
         
        if (v1.length != v2.length || !c.equalsIgnoreCase(d)) {
            System.out.println("no");
        } else {
            System.out.println("yes");
        }
        c=d="";
    }
     }

}
