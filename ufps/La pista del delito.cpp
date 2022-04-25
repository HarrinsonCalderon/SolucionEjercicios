#include<bits/stdc++.h>
using namespace std;

int main(){
int n,aux;

while(cin>>n){
    int v[1003];
    for(int i=1;i<=n;i++)
     cin>>v[i];
    bool ban[1003] ;
    for(int i=1;i<=n;i++){
    memset(ban,0,sizeof(ban));
     ban[i]=true;
     aux=v[i];
     while(!ban[aux]){
        ban[aux]=true;
        aux=v[aux];
     }
     if(i==1)cout<<aux;
     else cout<<" "<<aux;
    }
    cout<<"\n";
}
}

