#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e7;
vector<int>p;
bool vis[M];
void sieve(){
 vis[0]=vis[1]=1;
 for(int i=0;i<M;i++){
    if(!vis[i]){
        p.push_back(i);
        for(long long j=1ll*i*i;j<M;j+=i){
            vis[j]=1;
        }
    }
 }
}
ll EulerPhi(ll n){
ios_base::sync_with_stdio(0);
cin.tie(0);
 ll   ans=n;
 if(n==1) return 0;
 for(long long i=2;i*i<=n;i++){

        if(n%i==0){
           while(n%i==0){
                n/=i;
           }
           ans-=ans/i;
        }



 }
 if(n>1)ans-=ans/n;
 return ans;
}
int main(){
sieve();
ll m;
while(cin>>m && m){
cout<<EulerPhi(m)<<"\n";

}
}



