#include<bits/stdc++.h>
using namespace std;
const int M=1e7;
vector<int>primo;
bool  vis[M];
void sieve(){
vis[0]=vis[1]=1;
 for(int i=2;i<M;i++){
    if(!vis[i]){
        primo.push_back(i);
        for(long long j=1ll*i*i;j<M;j+=i){
            vis[j]=1;
        }
    }

 }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);
sieve();

int n,a=-1,b=-1;
while(cin>>n && n){
int su=0;
for(int i=0;i<n;i++){
   a=primo[i];
   b=n-primo[i];
   if(!vis[a] && !vis[b]){
    cout<<n<<" = "<<a<<" + "<<b<<"\n";
    break;
   }
}
}
return 0;
}


