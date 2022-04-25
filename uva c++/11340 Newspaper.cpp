#include<bits/stdc++.h>
using namespace std;

int main(){
 //freopen("in.txt", "r", stdin);
 //freopen("out.txt", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
int ca;
cin>>ca;
while(ca--){
 int n;
    string a;
    int b;
 map<char,int>m;
 cin>>n;
 for(int i=0;i<n;i++){
    cin>>a>>b;
    m[a[0]]=b;
 }
 int q;
 int acu=0;
 cin>>q;
 cin.ignore(1);
 for(int i=0;i<q;i++){
    string cad;
    getline(cin,cad);
    for(int i=0;i<cad.length();i++){
        if(m.count(cad[i])){
           acu+=m[cad[i]];
        }
    }
 }
 cout<<fixed<<setprecision(2)<<(double)acu/100<<"$\n";
}
}
///11340

