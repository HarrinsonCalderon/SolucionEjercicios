
#include<bits/stdc++.h>
using namespace std;
int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
//ios_base::sync_with_stdio(0);
//cin.tie(0);

int n,rta=0,ca;

while(cin>>n && n){

while(n>=3){
    n=(n-3)+1;
    rta+=1;
}
if(n==2){
    rta++;
}
cout<<rta<<"\n";
rta=0;
}
return 0;
}



