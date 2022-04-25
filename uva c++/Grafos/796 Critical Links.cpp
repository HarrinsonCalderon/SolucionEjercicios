#include<bits/stdc++.h>
using namespace std;

int UNVISITED=-1,dfsRoot,rootChildren,dfsNumberCounter;
vector<int>dfs_num;
vector<pair<int,int>>s;
vector<int>dfs_low;
vector<int>g[120];
vector<int>dfs_padre,punto_articulacion;
int nodos,aristas,rta;
void articulationPointAndBridge(int u) {
 dfs_low[u] = dfs_num[u] = dfsNumberCounter++; // dfs_low[u] <= dfs_num[u]
    for (int j = 0; j < (int)g[u].size(); j++) {
        int v = g[u][j];
      if (dfs_num[v] == UNVISITED) {
        dfs_padre[v] = u;
      articulationPointAndBridge(v);

     if (dfs_low[v] > dfs_num[u]){ // para puente
     //printf(" Arista (%d, %d) es un puente\n", u, v); //Si los quiero los guardo
     s.push_back({min(u,v),max(u,v)});
     }
     dfs_low[u] = min(dfs_low[u], dfs_low[v]);
     }else if (v != dfs_padre[u]){
     dfs_low[u] = min(dfs_low[u], dfs_num[v]);
     }
    }
}

 void init(){
 s.clear();
 dfsNumberCounter = 0;
 dfs_num.assign(nodos, UNVISITED);
 dfs_low.assign(nodos, 0);
 dfs_padre.assign(nodos, 0);
 punto_articulacion.assign(nodos, 0);
     for(int i=0;i<nodos;i++){
         g[i].clear();
     }
 }
 void solve(){

 for (int i = 0; i < nodos; i++){
     if (dfs_num[i] == UNVISITED) {
     articulationPointAndBridge(i);
     }
     }

 }


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);
int u,v;
string aristas;
while(cin>>nodos){
init();
for(int i=0;i<nodos;i++){
    cin>>u;
    cin>>aristas;
    aristas=aristas.substr(1,aristas.length()-1);
    stringstream s;
    s<<aristas;
    int m;
    s>>m;
    for(int i=0;i<m;i++){
        cin>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
}
solve();
cout<<s.size()<<" critical links\n";
sort(s.begin(),s.end());
for(int i=0;i<s.size();i++){
    cout<<s[i].first<<" - "<<s[i].second<<"\n";
}
cout<<"\n";
}


return 0;

}




