

#include<bits/stdc++.h>
using namespace std;


int main () {
 string cad,sa="";
 int con=0,ante=0;
 while(cin>>cad){
    for(int i=0;i<cad.length();i++){
        switch(cad[i]){
        case 'B':
        case 'F':
        case 'P':
        case 'V':
        con=1;
        break;
        case 'C':
        case 'G':
        case 'J':
        case 'K':
        case 'Q':
        case 'S':
        case 'X':
        case 'Z':
            con=2;
        break;
        case 'D':
        case 'T':
            con=3;
        break;
        case 'L':
            con=4;
            break;
        case 'M':
        case 'N':
            con=5;
            break;
        case 'R':
            con=6;
            break;
        default :
            con=0;
        }
      if(i==0 && con!=0){
        cout<<con;
      ante=con;
      }else if(ante!=con  ){
         if(con!=0){
            cout<<con;
            ante=con;
         }
         ante=con;
      }
    con=0;
    }
    cout<<"\n";
    con=0;
    ante=0;
 }
  return 0;
}
