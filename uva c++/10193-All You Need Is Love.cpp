#include<bits/stdc++.h>
using namespace std;
int co(string a){
reverse(a.begin(),a.end());
    int rta=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='1'){
            rta+=pow(2,i);
        }
    }
    return rta;
}
int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}
int main(){

ios_base::sync_with_stdio(0);
cin.tie(0);
string a,b;
int c,d,ca;
cin>>ca;
for(int i=1;i<=ca;i++){
cin>>a>>b;
c=co(a);
d=co(b);
if(gcd(c,d)>1){
    cout<<"Pair #"<<i<<": All you need is love!\n";
}else{
    cout<<"Pair #"<<i<<": Love is not all you need!\n";
}
}
return 0;
}

