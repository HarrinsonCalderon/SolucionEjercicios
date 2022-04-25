#include<bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);


int n,m;
while(cin>>n>>m){
 cout<<n+((n-1)/(m-1))<<"\n";
}
return 0;
}

