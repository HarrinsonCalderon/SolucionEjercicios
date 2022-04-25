#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int n,pos;
string cad;
int solve(int i){
pos=cad[i]-'a';
pos+=1;
 if(pos>=n)
    return 0;

 if(dp[i]!=-1)return dp[i];

 dp[i]=max(solve(i+1),solve(i+pos)+pos);
 return dp[n];
}
int main(){

 while(cin>>n){

    memset(dp,-1,sizeof(dp));
    cin>>cad;
    cout<<solve(0)<<"\n";
    /*Corregir*/
 }
return 0;
}
