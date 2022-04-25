#include<bits/stdc++.h>
using namespace std;

int main() {
long long m=1e5+3,n;
long long dp[m];
dp[0]=dp[1]=0;
dp[2]=1;
for(int i=3;i<m;i++){
    dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%1000000007;
}
while(cin>>n){
    cout<<dp[n-1]<<"\n";
}
}
