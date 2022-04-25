#include<bits/stdc++.h>
using namespace std;
const int MAX=100005;
int n;
vector<vector<int>>g;
int dis[MAX];
int bfs(int u,int s){
memset(dis,-1,sizeof(dis));
dis[u]=0;
queue<int>q;
q.push(u);
while(q.size()){
    int v=q.front();
    if(v==s){
        return dis[v];
    }
    q.pop();
    for(int i=0;i<g[v].size();i++){
        int w=g[v][i];
        if(dis[w]==-1){
            dis[w]=dis[v]+1;
            q.push(w);
        }
    }
}
}
int main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int no,ar,ca,c;
bool ban=false;
cin>>c;
while(c--){
if(ban)cout<<"\n";
ban=true;
cin>>n;
g.assign(n+1,vector<int>(0));
for(int i=0;i<n;i++){
    cin>>no>>ar;
    while(ar--){
        cin>>ca;
        g[no].push_back(ca);
    }
}
/*for(int i=0;i<n;i++){
    for(int j=0;j<g[i].size();j++){
        cout<<g[i][j]<<" ";
    }
    cout<<"\n";
}*/
int qa,qb;
cin>>qa>>qb;
cout<<qa<<" "<<qb<<" "<<bfs(qa,qb)-1<<"\n";
}
return 0;
}




