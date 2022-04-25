#include<bits/stdc++.h>
using namespace std;
vector<int>grafo[105];
bool vis[105];
int n,m;
void dfs(int s){
vis[s]=true;
for(int i=0;i<grafo[s].size();i++){
    int v=grafo[s][i];
    if(!vis[v]){
        dfs(v);
    }
}
}
void init(){
for(int i=0;i<n;i++){
    grafo[i].clear();
    vis[i]=false;
}
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int a,b,t;
cin>>t;
for(int i=1;i<=t;i++){
cin>>n>>m;
init();
for(int i=0;i<m;i++){
cin>>a>>b;
a--;b--;
grafo[a].push_back(b);
grafo[b].push_back(a);
}

int rta=-1;
for(int i=0;i<n;i++){
    if(!vis[i]){
        dfs(i);
        rta++;
    }
}
if(rta==0){
 cout<<"Caso #"<<i<<": a promessa foi cumprida\n";
}else{
    cout<<"Caso #"<<i<<": ainda falta(m) "<<rta<<" estrada(s)\n";
}

}
return 0;
}

