#include<bits/stdc++.h>
using namespace std;
int main(){
int m,p,a;
for(int i=1;i<=100;i++){
    cin>>a;
    if(a>m){
        m=a;
        p=i;
    }
}
cout<<m<<"\n";
cout<<p<<"\n";
return 0;
}
