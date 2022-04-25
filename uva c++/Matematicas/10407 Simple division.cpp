#include<bits/stdc++.h>
using namespace std;

int mcd(int a, int b){
 return a?mcd(b%a,a):b;
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);
int x;
while(cin>>x && x){
vector<int>v;
v.push_back(x);
while(cin>>x && x){
    v.push_back(x);
}
int rta=abs(v[1]-v[0]);
for(int i=2;i<v.size();i++){
    rta=mcd(rta,abs((v[i]-v[i-1])));
}
cout<<rta<<"\n";
}
return 0;
}


