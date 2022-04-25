#include<bits/stdc++.h>
using namespace std;


int main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
string cad;
while(cin>>n>>cad){
map<string,int>m;
for(int i=0;i<cad.length();i++){
    if(i+n<=cad.length()){

        m[cad.substr(i,n)]++;
    }
}
int rta=0;
string sa="";
for(auto i:m){
    if(i.second>rta){
        rta=i.second;
        sa=i.first;
    }
    rta=max(rta,i.second);
}
cout<<sa<<"\n";
}
return 0;
}














