#include<bits/stdc++.h>
using namespace std;
 const int  M=10000,N=1000;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);

int n,m,aux=0,con=0,ca=1;
while(cin>>n>>m && n && m){
aux=con=0;
for(int i=1;i<=27;i++){
    if(m*i>=n){
        aux=i;
        break;
    }
    con++;
}
cout<<"Case "<<ca++<<": ";
if(aux*m>=n){
    cout<<con<<"\n";
}else{
    cout<<"impossible\n";
}
}
return 0;
}


