#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll memo[2][1000005];
ll con=0;
void init(){
memset(memo,0,sizeof(memo));
for(ll i=4;i<1000005;i++){
    if(i%2==0){
        con++;
        memo[0][i]=memo[0][i-1]+con;
        memo[1][i]=memo[1][i-1]+memo[0][i];
    }else{
        memo[0][i]=memo[0][i-1]+con;
        memo[1][i]=memo[1][i-1]+memo[0][i];
    }
    //cout<<memo[0][i]<<"\n";
}

}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
init();
ll n;
while(cin>>n && n>=3){
    cout<<memo[1][n]<<"\n";
}

return 0;
}
//11401

