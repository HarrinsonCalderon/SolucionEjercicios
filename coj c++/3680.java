
import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int c, n, me, total = 0, con = 0;
        c = sc.nextInt();
        for (int i = 0; i < c; i++) {
            n = sc.nextInt();
            me = sc.nextInt();
            int ele[] = new int[n];
            for (int j = 0; j < ele.length; j++) {
                ele[j] = sc.nextInt();

            }
            Arrays.sort(ele);

            for (int j = 0; j < n; j++) {
                total += ele[j];
                if (total < me) {
                   con++;
                }else{
                    break;
                }
 
            }

            System.out.println(con);
            con = 0;
            total = 0;
        }

    }
}
