#include<bits/stdc++.h>
using namespace std;
const int M=1e7;
vector<int>primo;
bool mark[M];
void sieve(){
    mark[0]=mark[1]=1;
    for(int i=2;i<M;i++){
        if(!mark[i]){
            primo.push_back(i);
            for(long long j=1ll*i*i;j<M;j+=i){
                mark[j]=1;
            }
        }
    }

}
typedef long long int  ll;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);
sieve();
int n,m;
while(cin>>n>>m){
    ll a,b,c,d,primero=-1,ac1=INT_MAX,ac2=0;
    bool ban=0;
    for(ll i=n;i<=m;i++){
        if(!mark[i]){
            if(primero==-1){
                primero=i;
            }else{
             if(i-primero<ac1){
                ac1=i-primero;
                b=primero;
                a=i;
             }
              if(i-primero>ac2){
                ac2=i-primero;
                d=primero;
                c=i;
             }
             primero=i;
            ban=true;
            }
        }
    }
    if(ban)
    cout<<b<<","<<a<<" are closest, "<<d<<","<<c<<" are most distant.\n";
    else
    cout<<"There are no adjacent primes.\n";

}
return 0;
}


