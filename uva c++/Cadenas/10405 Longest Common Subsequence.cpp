#include<bits/stdc++.h>
using namespace std;

//int dp[1005][1005];

int main() {
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

string a,b;
while(getline(cin,a) && getline(cin,b) ){
int dp[a.length()+1][b.length()+1];
memset(dp,0,sizeof(dp));
for(int i=1;i<=a.length();i++){
 for(int j=1;j<=b.length();j++){
    if(a[i-1]==b[j-1]){
      dp[i][j]=dp[i-1][j-1]+1;
    }else{
     dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
 }

}
cout<<dp[a.length()][b.length()]<<"\n";
}
return 0;
}



