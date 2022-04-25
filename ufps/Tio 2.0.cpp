#include<bits/stdc++.h>
using namespace std;

int main(){
long long int a,b,h,l=0,m;
while(cin>>a>>b){
h=1e6   ;
l=0;
while(h-l>1){
 m=(h+l)/2;
 if(a+((m*(m+1)*((2*m)+1))/6)>b+((m*(m+1))/2)){
   h=m;
 }else{
   l=m;
 }
}
cout<<h<<"\n";
}
return 0;
}
