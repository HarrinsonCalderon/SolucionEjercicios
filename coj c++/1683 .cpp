#include<bits/stdc++.h>
using namespace std;
int main(){
int a,c,con=0;
    cin>>c;
    while(c-->0){
        cin>>a;
        for(int i=1;i<a;i++){
            if(a%i==0){
                 con+=i;
            }
        }
        if(con<a){
            cout<<"Deficient\n";
        }else if(con==a){
            cout<<"Perfect\n";
        }else if(con>a){
        cout<<"Abundant\n";
        }
        con=0;
    }

return 0;
}
