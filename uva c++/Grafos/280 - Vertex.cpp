#include<bits/stdc++.h>
using namespace std;
int it,veri;
vector<int>g[105];
bool vis[105];
void dfs(int s){
    if(s!=veri || it)
    vis[s]=1;
    it=1;
    for(int i=0;i<g[s].size();i++){
        int v=g[s][i];
        if(!vis[v])
            dfs(v);
    }
}
int main(){

int m,n,x,y,ss;
while(cin>>n && n){
for(int i=0;i<105;i++){
    g[i].clear();
}
while(cin>>x && x){

    while(cin>>y && y){

        g[x].push_back(y);
    }
}
cin>>m;
while(m--){
    cin>>veri;
    it=0;
    memset(vis,0,sizeof(vis));
    dfs(veri);
    int cont=0;
    for(int j=1;j<=n;j++){
        if(!vis[j])
           cont++;
    }
    cout<<cont;
    for(int j=1;j<=n;j++){
        if(!vis[j])
           cout<<" "<<j;
    }
    cout<<"\n";
    cont=0;
}
}
return 0;
}
