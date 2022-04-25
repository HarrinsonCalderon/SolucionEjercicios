#include<bits/stdc++.h>
using namespace std;

int main(){
int n,it=1,sum=0,aux;
while(cin>>n && n){

    for(int i=0;i<n;i++){
       cin>>aux;
       if (aux>0)sum++;
       else sum--;
    }
    cout<<"Case "<<it<<": "<<sum<<"\n";
    it++;
    sum=0;
}
return 0;
}
