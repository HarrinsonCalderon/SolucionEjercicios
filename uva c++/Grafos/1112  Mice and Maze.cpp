#include<bits/stdc++.h>
using namespace std;


vector<vector<pair<int,int>>>g;
vector<int>dis;

void dijkstra(int s){
 //distancia, nodo y ordene por distancia de menor a mayor
 priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;
 dis[s]=0;
 q.push({0,s});

 while(q.size()){
    //saco el meno en distancia
    int u=q.top().second;
    int w=q.top().first;
    q.pop();
    //procesa el minimo
    if(dis[u]!=w)continue;
    for(auto e:g[u]){
         int nodo=e.first;
         int nuevopeso=w+e.second;
         //relajacion
         if(dis[nodo]>nuevopeso){
            dis[nodo]=nuevopeso;
            q.push({nuevopeso,nodo}); //para que siga sacando el menor
         }
    }
 }

}


int main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
    int nodos,aristas,ca;
    int u,v,w,q,va;
    bool ban=0;
    cin>>ca;
    while(ca--){
    if(ban)cout<<"\n";

    cin>>nodos>>q>>va>>aristas;
    g.assign(nodos+1,vector<pair<int,int>>(0));
    dis.assign(nodos+1,INT_MAX);
    for(int i=0;i<aristas;i++){
        cin>>u>>v>>w; //de u a v con peso w
         g[v].push_back({u,w});
    }

    dijkstra(q);
    int rta=0;
    for(int i=1;i<dis.size();i++){
        //cout<<"distancia minima de "<<q<<" hasta "<<i<<" es:"<<dis[i]<<"\n";
        if(dis[i]<=va)rta++;
    }
    cout<<rta<<"\n";
    ban=1;
    }
return 0;
}


