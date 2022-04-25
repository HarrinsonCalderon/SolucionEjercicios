#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e8;
vector<ll>p;
bool mark[N];
void sieve(){
 mark[0]=mark[1]=1;
 for(ll i=0;i<N;i++){
    if(!mark[i]){
        p.push_back(i);
        for(ll j=1ll*i*i;j<N;j+=i){
            mark[j]=1;
        }
    }
 }
}
ll EulerPhi(ll n){
    ll pf_idx=0,pf=p[pf_idx],ans=n;
    while(pf*pf<=n){
        if(n%pf==0){
            ans-=ans/pf;
        }
        while(n%pf==0){
            n/=pf;
        }
         pf=p[++pf_idx];
    }
    if(n!=1){
        ans-=ans/n;
    }
    return ans;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);
sieve();
ll n;
while(cin>>n && n){

cout<<EulerPhi(n)<<"\n";
}

return 0;
}


