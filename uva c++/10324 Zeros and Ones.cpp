#include<bits/stdc++.h>
using namespace std;

int main(){
//freopen ("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
string cad;
int it=1;
int ca,a,b,con1=0,con2=0;
while(cin>>cad){
cin>>ca;
 cout<<"Case "<<it<<":\n";
 it++;
while(ca--){
    cin>>a>>b;
    bool ban=1;
    if(a==b){
        cout<<"Yes\n";
        continue;
    }
    if(a>b){
        for(int i=b;i<=a;i++){
            if(cad[i]!=cad[a]){
                ban=0;
                cout<<"No\n";
                break;
            }
        }
    }else{
        for(int i=a;i<=b;i++){
            if(cad[i]!=cad[a]){
                ban=0;
                cout<<"No\n";
                break;
            }
        }
    }

    if(ban ){
        cout<<"Yes\n";
    }
}
}
}



