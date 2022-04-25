#include<bits/stdc++.h>
using namespace std;
vector<int>grafo[205];
int vis[205];
bool bipartite(int u){
queue<int>cola;
cola.push(u);
vis[u]=1;
while(cola.size()){
    u=cola.front();
    cola.pop();
    for(int i=0;i<grafo[u].size();i++){
        int v=grafo[u][i];
        if(vis[v]==0){
            cola.push(v);
            if(vis[u]==1 || vis[u]==0){
                vis[v]=2;
            }else if(vis[u]==2){
                vis[v]=1;
            }
        }
        if(vis[u]==vis[v]){
            return false;
        }
    }
}
return true;
}
int main(){
int nodos,n,a,b;
while(cin>>nodos && nodos){
    memset(vis,0,sizeof(vis));
    for(int i=0;i<nodos;i++){
        grafo[i].clear();
    }
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a>>b;
    grafo[a].push_back(b);
    grafo[b].push_back(a);
    }
    if(bipartite(0)){
    cout<<"BICOLORABLE.\n";
    }else{
    cout<<"NOT BICOLORABLE.\n";
    }

}
return 0;
}
/*
La idea es pintar 0 con 1
Luego sus abyacentes con 2
Y por eso las condiciones, se pinta los abyacentes de manera distinta al nodo que se saque de la cola
Si algun dia coincide el de la cola con algun abyacente no es bipartito
*/
