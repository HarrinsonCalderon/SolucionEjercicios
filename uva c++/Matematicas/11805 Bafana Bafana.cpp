#include<bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);

int n,k,p,i,ca,c=1;
cin>>ca;
while(ca--){
cin>>n>>k>>p;
i=k;
while(p--){

   if(i==n)
    i=1;
    else i++;


}
cout<<"Case "<<c++<<": "<<i<<"\n";
}
return 0;
}


