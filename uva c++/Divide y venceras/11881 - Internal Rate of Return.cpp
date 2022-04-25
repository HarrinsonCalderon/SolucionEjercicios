#include<bits/stdc++.h>
using namespace std;


int main(){
int n,v[10006];
while(cin>>n && n!=0){
n++;
for(int i=0;i<n;i++){
    cin>>v[i];
}
double h=10004,l=-1,m,eps=1e-9,aux=0;
while(h-l>eps){
    m=(h+l)/2.0;
    for(int i=0;i<n;i++){
        aux+=v[i]/pow(1+m,i);
    }
    if(aux<=0){
        h=m;
    }else{
        l=m;
    }
    aux=0;
}
cout<<fixed<<setprecision(2)<<l<<"\n";
}
return 0;
}
