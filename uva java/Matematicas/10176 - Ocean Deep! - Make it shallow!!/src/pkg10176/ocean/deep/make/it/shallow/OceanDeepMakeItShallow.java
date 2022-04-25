
package pkg10176.ocean.deep.make.it.shallow;

import java.util.Scanner;


public class OceanDeepMakeItShallow {

    
    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      String cad;
      int sa=0;
      while(sc.hasNext()){
      cad=sc.next();
        if (!cad.equals("#")) {
            for (int i = 0; i < cad.length()-1; i++) {
                sa=sa*Integer.parseInt(cad.charAt(i)+"",2)+cad.charAt(i)-'0';
                //sa%=131071;
                System.out.println(sa+"<-");
            }
        }
        System.out.println(sa==0?"YES":"NO");
          System.out.println(sa);
        sa=0;
        }
    }
    
}
