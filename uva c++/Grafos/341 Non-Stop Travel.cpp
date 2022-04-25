
#include<bits/stdc++.h>
using namespace std;

const int oo=10000;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int it=1;
int n,m;
while(cin>>n && n){
m=n;
vector<vector<int>>min_dis(n,vector<int>(n,oo));
vector<vector<int>>nxt(n,vector<int>(n,-1));
for(int i=0;i<m;i++){
    int k;
    cin>>k;
    int u,v,w;
    u=i;
    while(k--){
    cin>>v>>w;
    min_dis[u][v-1]=w;
    nxt[u][v-1]=v-1;
    }
}
for(int i=0;i<n;i++){
    min_dis[i][i]=0;
    nxt[i][i]=i;
}
for(int k=0;k<n;k++){
   for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        if(min_dis[i][j]>min_dis[i][k]+min_dis[k][j]){
          min_dis[i][j]=min(min_dis[i][j],min_dis[i][k]+min_dis[k][j]);
          nxt[i][j]=nxt[i][k];
        }

      }
   }
}
/*
cout<<"Minima distancia\n";
for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
    cout<<min_dis[i][j]<<" ";
 }
 cout<<"\n";
}*/
/*cout<<"Camino minimo de from a to\n";*/
int from,to,aa,bb;
cin>>from>>to;

from--;to--;
aa=from;bb=to;
cout<<"Case "<<it++<<": Path =";
if(min_dis[from][to]==oo){
   // cout<<"No hay camino\n";
}else{
    while(from!=to){
        cout<<" "<<from+1;
        from=nxt[from][to];
    }
    cout<<" "<<from+1;

    cout<<"; "<<min_dis[aa][bb]<<" second delay\n";
}
}
return 0;
 }

