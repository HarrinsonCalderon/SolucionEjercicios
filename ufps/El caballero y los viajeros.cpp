#include<bits/stdc++.h>
using namespace std;

int main(){
int n,ca;
cin>>ca;
while(ca--){
cin>>n;
int v[n],o[n];
for(int i=1;i<=n;i++)
    cin>>v[i];
for(int i=1;i<=n;i++)
    cin>>o[i];
int dp[n+1];
dp[0]=0;
for(int i=1;i<=n;i++){
   dp[i]=dp[i-1];
    if(v[i]<i){
        dp[i]=max(dp[i],dp[v[i]]+o[i]);
    }
}

    cout<<dp[n]<<"\n";
    }
return 0;
}
