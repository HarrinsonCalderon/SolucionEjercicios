#include<bits/stdc++.h>
using namespace std;
#define MM 50006
bool vis[MM];
vector<int>grafo[MM];
void dfs(int u){
vis[u]=true;
for(int i=0;i<grafo[u].size();i++){
    int v=grafo[u][i];
    if(!vis[v]){
        dfs(v);
    }
}
}
int main(){
int n,ar,x,y;
memset(vis,false,sizeof(vis));
for(int i=0;i<MM;i++){
    grafo[i].clear();
}
cin>>n>>ar;
while(ar--){
    cin>>x>>y;
    grafo[x].push_back(y);
    grafo[y].push_back(x);
}
int con=0;
for(int i=1;i<=n;i++){
    if(!vis[i]){
        con++;
        dfs(i);
    }
}
cout<<con<<"\n";
return 0;
}
