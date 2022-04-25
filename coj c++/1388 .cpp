#include<bits/stdc++.h>
using namespace std;
int main(){
long long  a,b,n;
string c;
cin>>n;
for(int i=0;i<n;i++){
cin>>a>>b;
a=pow(a,b);
c=""+a;
int lon=c.length();
lon--;
 ;
cout<<c[lon] <<"\n";
}

return 0;
}
