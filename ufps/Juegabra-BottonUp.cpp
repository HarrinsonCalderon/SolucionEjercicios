#include<bits/stdc++.h>
using namespace std;

int main(){
long n;
string  cad;
while(cin>>n){
    cin>>cad;
    long dp[n];
    dp[n-1]=((int)cad[n-1]-'a')+1;
for(int i=cad.length()-2;i>=0;i--){
    long pos=(int)cad[i]-'a';
    pos++;
    if(i+pos>=n){
        dp[i]=max(pos,dp[i+1]);
    }else if(i+pos<=n){
        dp[i]=max(pos+dp[i+pos],dp[i+1]);
    }

}
/*for(int i=0;i<n;i++)
  */cout<<dp[0]<<"\n";
}

return 0;
}
