
import java.util.Scanner;

public class Main {

    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        } else {
            return gcd(b, a % b);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//        int n = sc.nextInt();
//        sc.next();
//        while(n-->0){
        int gcd = 0;
        String v[] = sc.nextLine().split(" ");
        int max = Integer.parseInt(v[0]);
        for (int i = 1; i < v.length; i++) {
            gcd = gcd(max, Integer.parseInt(v[i]));
            max = Math.max(max, gcd);
        }
//            if (max < 10) {
//                max = max * max;
//            } else {
//                max = max * 2;
//            }
        System.out.println(gcd);

//        }
    }
//terminar
}
