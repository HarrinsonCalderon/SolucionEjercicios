#include<bits/stdc++.h>
using namespace std;
int x,y,d;
void extendEuclid(int a,int b){
 if(b==0){
    x=1;
    y=0;
    d=a;
     return;
 }
 extendEuclid(b,a%b);
 int x1=y;
 int y1=x-(a/b)*y;
 x=x1;
 y=y1;
}
int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 while(cin>>x>>y){

 extendEuclid(x,y);
 cout<<x<<" "<<y<<" "<<d<<"\n";
 }
}



