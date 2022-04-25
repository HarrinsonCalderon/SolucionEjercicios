#include<bits/stdc++.h>
using namespace std;
int main(){

string n;
    int it,con=1,pos,con2=0;
    string salida="";
    string aux1="",aux2="";
    cin>>n;
    cin>>it;
    cin>>pos;
    while(n!="0" && it!=0 && pos!=0){

    con=1;salida="";aux1="",aux2="";
    for(int z=0;z<it-1;z++){
            con=1;
          for(int i=0;i<=n.length()-1;i++){
            if(n[i]==n[i+1]){
                con++;
            }else{
                stringstream ss;
                ss<<con;
                salida+=ss.str();
                salida+=n[i];
                con=1;
            }
            if(salida.length()>pos){
                con2++;
            }
            if(con2==50){
                break;
            }

            }
            //cout<<n<<"\n";
          n=salida;
          salida="";
          con2=0;
        }
//cout<<"\n";
    cout<<n[pos-1]<<"\n";
    cin>>n;
    cin>>it;
    cin>>pos;
    }
return 0;
}

