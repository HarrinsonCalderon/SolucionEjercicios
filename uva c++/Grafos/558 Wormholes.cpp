#include<bits/stdc++.h>
using namespace std;

const int oo=100000;

struct edge{
    int u,v,w;
};

int main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int ca;
cin>>ca;
while(ca--){

int nodos,aristas;
cin>>nodos>>aristas;

edge edges[oo];
for(int i=0;i<aristas;i++){
    int u,v,w;
    cin>>u>>v>>w;
    //index desde 0
    //edges.push_back({u,v,w});
    edges[i].u=u;
    edges[i].v=v;
    edges[i].w=w;

}

//vector<int>min_dis(nodos,oo);
int min_dis[oo];
int source=0;
min_dis[source]=0;

for(int i=0;i<nodos-1;i++){
    for(int j=0;j<aristas;j++){
        if(min_dis[edges[j].v]>min_dis[edges[j].u]+edges[j].w){
           min_dis[edges[j].v]=min_dis[edges[j].u]+edges[j].w;
                //memorizar el padre para el camino  edges[j].u
        }
    }
}
bool rta=0;
     for(int j=0;j<aristas;j++){
        if(min_dis[edges[j].v]>min_dis[edges[j].u]+edges[j].w){
           rta=1;
        }
    }

(rta)?cout<<"possible\n":cout<<"not possible\n";

}

return 0;
}

