#include<bits/stdc++.h>
using namespace std;
vector<int>dfs_low,dfs_num,s;
bool vis[500];
vector<int>grafo[500];
int dfsCont=0,N;

map<string,int>m1;
map<int,string>m2;
vector<int>l[100];
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
        //cout<<v<<"\n";
        //cout<<m2[v]<<" "<<m1[m2[v]]<<"\n";
        l[con].push_back(v);
        vis[v]=false;
        if(v==u){
            break;
        }
    }
    sort(l[con].begin(),l[con].end());
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
int ar,it2=1;;
string a,b;
while(cin>>N>>ar && N){
if(it2!=1)cout<<"\n";
for(int i=0;i<N;i++){
  grafo[i].clear();
  l[i].clear();
}
m1.clear();
m2.clear();
int it=0;
for(int i=0;i<ar;i++){
  cin>>a>>b;
  if(!m1.count(a)){
     m1[a]=it;
     m2[it]=a;
     it++;
  }
    if(!m1.count(b)){
     m1[b]=it;
     m2[it]=b;
     it++;
  }
  grafo[m1[a]].push_back(m1[b]);
}


/*for(int i=0;i<N;i++){
 for(int j=0;j<grafo[i].size();j++){
    cout<<m2[grafo[i][j]]<<" ";
 }
 cout<<"\n";
}*/
solve();
cout<<"Calling circles for data set "<<it2++<<":\n";

for(int i=con-1;i>=0;i--){
   for(int j=0;j<l[i].size();j++){
      cout<<m2[l[i][j]];
      if(j+1<l[i].size())cout<<", ";
    }
  cout<<"\n";
}
con=0;
}
return 0;
}

