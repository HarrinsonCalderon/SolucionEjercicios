#include<bits/stdc++.h>
using namespace std;

int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
string cad;
int con=0,ca;
bool ban=0;
cin>>ca;
cin.ignore(2);
while(ca--){
con=0;
if(ban)cout<<"\n";
map<string,int>m;
while(getline(cin,cad) && cad!=""){
    m[cad]++;
    con++;
}

for(auto it:m){
    cout<<it.first<<" "<<fixed<<setprecision(4)<<((double)it.second/con)*100<<"\n";
}
ban=1;
}
}


