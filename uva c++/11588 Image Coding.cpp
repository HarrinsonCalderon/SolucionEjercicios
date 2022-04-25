#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
 return a>b;
}

int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int a,b,c,d,ca;
cin>>ca;
for(int q=1;q<=ca;q++){
cin>>a>>b>>c>>d;
string cad;
map<char,int>m;
for(int i=0;i<a;i++){
    cin>>cad;
    for(int j=0;j<b;j++){
        m[cad[j]]++;
    }
}
int maz=0;
for(auto it:m){
   // cout<<it.first<<" "<<it.second<<"\n";
    maz=max(maz,it.second);
}
int rta=0;
for(auto it:m){
    if(it.second==maz){
        rta+=c*it.second;
    }else{
      rta+=d*it.second;
    }
}
cout<<"Case "<<q<<": "<<rta<<"\n";
}
}


