#include<bits/stdc++.h>
using namespace std;


int main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int ca;
cin>>ca;
cin.ignore();
while(ca--){
string cad;
getline(cin,cad);
int l=sqrt(cad.length());
if(l*l==cad.length()){
    int a,b;
    a=0;b=0;
    for(int i=0;i<l;i++){
     for(int j=i;j<cad.length();j+=l){
        cout<<cad[j];
     }
    }
    cout<<"\n";
}else{
    cout<<"INVALID\n";
}
}
return 0;
}


