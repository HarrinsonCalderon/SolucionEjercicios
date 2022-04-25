#include<bits/stdc++.h>
using namespace std;
vector<int>dfs_low,dfs_num,s;
bool vis[5009];
vector<int>grafo[5009];
int dfsCont=0,N;

 map<string,int>m1;


int con=0;
void tarjanSCC(int u){
dfs_low[u]=dfs_num[u]=dfsCont++;
s.push_back(u);
vis[u]=true;
for(int i=0;i<grafo[u].size();i++){
    int v=grafo[u][i];
    if(dfs_num[v]==-1){
        tarjanSCC(v);
    }
    if(vis[v]){
        dfs_low[u]=min(dfs_low[u],dfs_low[v]);
    }
}
if(dfs_low[u]==dfs_num[u]){
      //cout<<"Componentes:\n";
    while(true){
        int v=s.back();
        s.pop_back();
        // cout<<v<<"\n";
        vis[v]=false;
        if(v==u){
            break;
        }
    }
con++;


}
}

void solve(){
   dfs_num.assign(N+1,-1);
   dfs_low.assign(N+1,0);
   memset(vis,0,sizeof(vis));
   dfsCont=0;
   for(int i=0;i<N;i++){
        if(dfs_num[i]==-1){
            tarjanSCC(i);

        }
   }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);

int ar,it=0;
string a,b;
while(cin>>N>>ar && N){
cin.ignore();
for(int i=0;i<N;i++){
  grafo[i].clear();
}
m1.clear();
con=0;
it=0;
for(int i=0;i<N;i++){
    getline(cin,a);
    m1[a]=i;

}
for(int i=0;i<ar;i++){
     getline(cin,a);
     getline(cin,b);
     grafo[m1[a]].push_back(m1[b]);
}

/*for(int i=0;i<N;i++){
 for(int j=0;j<grafo[i].size();j++){
    cout<<grafo[i][j]<<" ";
 }
 cout<<"\n";
}*/
solve();
cout<<con<<"\n";
}
return 0;
}

