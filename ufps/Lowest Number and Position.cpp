#include<bits/stdc++.h>
using namespace std;

int main(){
int n,a;
cin>>n;
int m=1e9,p;
for(int i=0;i<n;i++){
    cin>>a;
    if(a<m){
       m=a;
       p=i;
    }
}
cout<<"Menor valor: "<<m;
cout<<"\nPuesto: "<<p<<"\n";
return 0;
}
