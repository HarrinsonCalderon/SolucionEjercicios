
import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        int v[] = new int[3];
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        v[0] = a;
        v[1] = b;
        v[2] = c;
        Arrays.sort(v);
        while (a != 0 && b != 0 && c != 0) {
            if ((v[0]*v[0])+(v[1]*v[1]) == v[2]*v[2]) {
                System.out.println("right");
            } else {
                System.out.println("wrong");
            }
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            v[0] = a;
            v[1] = b;
            v[2] = c;
            Arrays.sort(v);
        }
    }

}
