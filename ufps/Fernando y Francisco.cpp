#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,con=0;
while(cin>>a>>b){
while(a<=b){
  a*=3;
  b*=2;
  con++;
}
cout<<con<<"\n";
con=0;
}
return 0;
}
