#include<bits/stdc++.h>
using namespace std;

vector<int>g[105];
vector<int>rta;
bool vis[105];
void dfs(int u){
  vis[u]=true;
  for(int i=0;i<g[u].size();i++){
      int s=g[u][i];
      if(!vis[s]){
        dfs(s);
      }
  }
  rta.push_back(u);
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
int n,a,u,v;

while(cin>>n>>a && (n||a)){

for(int i=0;i<=n;i++){
 g[i].clear();
}
memset(vis,0,sizeof(vis));
rta.clear();
for(int i=0;i<a;i++){
 cin>>u>>v;
 g[u].push_back(v);
}
for(int i=1;i<=n;i++){
 if(!vis[i]){
    dfs(i);
 }
}
reverse(rta.begin(),rta.end());
for(int i=0;i<n;i++){
   if(!i)cout<<rta[i];
   else cout<<" "<<rta[i];
}
cout<<"\n";
}
return 0;
}

