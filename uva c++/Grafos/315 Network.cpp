#include<bits/stdc++.h>
using namespace std;

int UNVISITED=-1,dfsRoot,rootChildren,dfsNumberCounter;
vector<int>dfs_num;
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
        if (u == dfsRoot){// special case if u is a root
             rootChildren++;
         }
    articulationPointAndBridge(v);
     if (dfs_low[v] >= dfs_num[u]){//puntos de articulacion
     punto_articulacion[u] = true;
     }
     if (dfs_low[v] > dfs_num[u]){ // para puente
     //printf(" Arista (%d, %d) es un puente\n", u, v); //Si los quiero los guardo
     }
     dfs_low[u] = min(dfs_low[u], dfs_low[v]);
     }else if (v != dfs_padre[u]){
     dfs_low[u] = min(dfs_low[u], dfs_num[v]);
     }
    }
}

 void init(){
  rta=0;
 dfsNumberCounter = 0;
 dfs_num.assign(nodos, UNVISITED);
 dfs_low.assign(nodos, 0);
 dfs_padre.assign(nodos, 0);
 punto_articulacion.assign(nodos, 0);
     for(int i=0;i<=nodos;i++){
         g[i].clear();
     }
 }
 void solve(){
 //printf("Puentes:\n"); //Puentes
 for (int i = 0; i < nodos; i++){
     if (dfs_num[i] == UNVISITED) {
     dfsRoot = i;
     rootChildren = 0;
     articulationPointAndBridge(i);
     punto_articulacion[dfsRoot] = (rootChildren > 1); // special case

     }
     }
 //printf("Puntos de articulacion:\n");
 for (int i = 0; i <nodos; i++){
     if (punto_articulacion[i]){
   //  printf(" Nodo %d\n", i);
     rta++;
     }
 }
 }


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);
int u,v;
string cad;
while(cin>>nodos && nodos){
init();
while(getline(cin,cad) && cad!="0"){
    stringstream s;
    s<<cad;
    int n,u,v;
    int it=0;
    while(s>>n){
        if(!it){
            u=n;
        }else{
            v=n;
            g[u-1].push_back(v-1);
            g[v-1].push_back(u-1);

        }
    it++;
    }
}
/*
for(int i=0;i<=nodos;i++){
    cout<<i<<" ";
    for(int j=0;j<g[i].size();j++){
            cout<<g[i][j]<<" ";
    }*/
solve();
    cout<<rta<<"\n";
}


return 0;

}




