#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int a,b,x,y;
while(cin>>a>>b && a!=-1 && b!=-1){
if(a==b){
    cout<<0<<"\n";
}else if(a<b){
    x=a+1+99-b;
    y=b-a;
    cout<<min(x,y)<<"\n";
}else if(a>b){
    x=99-a+1+b;
    y=a-b;
    cout<<min(x,y)<<"\n";
}
}
}


