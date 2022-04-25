#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5+3;
long long m,dp[MAX],aux;
int tri(int n){
 if(n==1 || n ==2) dp[n]= 0;
   if(n==3) dp[n]= 1;
   if(dp[n]!=-1)return dp[n];
 if(n>=4) dp[n]=(tri(n-1)+tri(n-2)+tri(n-3))%1000000007;
 return dp[n];
}

int main(){
memset(dp,-1,sizeof(dp));
/*CORREGIR*/
while(cin>>m){

    cout<<tri(m)<<"\n";
}
}
