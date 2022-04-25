#include<bits/stdc++.h>
using namespace std;

int main(){
int c,s,t;
while(cin>>t>>c>>s){
    int dp[t+1];
    for(int i=0;i<=t;i++){
        dp[i]=i;
        if(i-c>=0 )
          dp[i]=min(dp[i],dp[i-c]);

        if(i-s>=0)
         dp[i]=min(dp[i],dp[i-s]);

    }
    cout<<dp[t]<<"\n";
}

return 0;
}
