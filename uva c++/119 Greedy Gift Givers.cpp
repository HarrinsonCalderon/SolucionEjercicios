#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
 int n;
 bool ban=0;
 while(cin>>n){
 map<string,int>m;
 vector<string>nom;
 string p,am;
 for(int i=0;i<n;i++){
    cin>>p;
    m[p]=0;
    nom.push_back(p);
 }
 int monto,ca;
 for(int i=0;i<n;i++){
   cin>>p>>monto>>ca;
   if(ca>0){
       int aux=monto%ca;
       m[p]+=aux;
       m[p]-=monto;
       for(int j=0;j<ca;j++){
        cin>>am;
        m[am]+=monto/ca;
       }
    }
  }
   if(ban)cout<<"\n";
  for(string it:nom){
    cout<<it<<" "<<m[it]<<"\n";
  }
 ban=1;
  }
}

