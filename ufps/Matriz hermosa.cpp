#include<bits/stdc++.h>
using namespace std;
int main(){
int f,c,a,ca;
cin>>ca;
while(ca--){
for(int i=1;i<=5;i++){
 for(int j=1;j<=5;j++){
    cin>>a;
    if(a==1){
        f=i;
        c=j;
    }
 }
}
f=(max(f,3))-min(f,3);
c=(max(c,3))-min(c,3);
cout<<f+c<<"\n";
}
return 0;
}


