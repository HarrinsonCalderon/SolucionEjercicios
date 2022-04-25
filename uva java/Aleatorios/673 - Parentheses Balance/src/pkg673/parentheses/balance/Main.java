
import java.util.Scanner;
import java.util.Stack;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String cad;
         int n=sc.nextInt();
         cad=sc.next();
         for (int i = 0; i < n; i++) {
            cad=sc.next();
            boolean ban=false;
            Stack<String>pila=new Stack<String>();
             for (int j = 0; j < cad.length(); j++) {
                 if (cad.charAt(j)=='(' || cad.charAt(j)=='[') {
                     pila.push(cad.charAt(j)+"");
                 }else   {
                     if (pila.size()==0) {
                         ban=true;
                         break;
                     }
                     String cima=pila.peek();
                     if (cad.charAt(j)==')' && !cima.equals("(") || cad.charAt(j)==']' && !cima.equals("[") ) {
                         ban=true;
                         break;
                     }
                     pila.pop();
                 }
             }
             if (pila.size()==0) {
                 ban=true;
             }
             if (!ban) {
                 System.out.println("Yes");
             }else{
                 System.out.println("No");
             }
        }
    }
}
