#include<bits/stdc++.h>
using namespace std;

const int MAX=205;
vector<vector<int>>g(MAX);
int vis[MAX];
int n,a,rta,c1,c2;
bool ban;
void bipartito(int u){
    c1=c2=0;
    queue<int>q;
    q.push(u);
    vis[u]=1;
    c2++;
    while(q.size()){
        int v=q.front();
        q.pop();
        for(int i=0;i<g[v].size();i++){
         u=g[v][i];
         if(vis[u]==0){
            if(vis[v]==1){
                vis[u]=2;
               c1++;
            }else if(vis[v]==2){
                vis[u]=1;
                c2++;
            }
            q.push(u);

         }else if(vis[u]==vis[v]){
            ban=false;
         }
        }
    }

}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);
int u,v,ca;
cin>>ca;
while(ca--){
cin>>n>>a;
for(int i=0;i<n;i++){
    g[i].clear();
    vis[i]=0;
}

for(int i=0;i<a;i++){
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
}
ban=true;
rta=0;
for(int i=0;i<n && ban;i++){
if(!vis[i]){
    bipartito(i);
    if(ban){
      rta+=max(1,min(c1,c2));
    }
}
}
if(!ban){
    cout<<"-1\n";
}else{

   cout<<rta<<"\n";
}
}
return 0;
}



