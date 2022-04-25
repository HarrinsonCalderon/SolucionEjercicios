#include<bits/stdc++.h>
using namespace std;

map<string,vector<string>>g;
map<string,int>dis;
map<string,string>p;
void camino(string in,string fi){
    if(in==fi){
       //cout<<in<<" "<<p[fi]<<"\n";
        return;
    }
    camino(in,p[fi]);

    cout<<p[fi]<<" "<<fi<<"\n";
}
int bfs(string in,string fi){
queue<string>q;
q.push(in);
dis[in]=0;
//p[in]=in;
while(q.size()){
    string u=q.front();

    if(u==fi){
        return 1;
    }
    q.pop();
    for(int i=0;i<g[u].size();i++){
        string v=g[u][i];
        if(dis[v]==-1){
            dis[v]=dis[u]+1;
            q.push(v);
            p[v]=u;
        }
    }
}
return -1;
}

int main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
bool ban=0;
int n;
string a,b;
while(cin>>n){
if(ban)cout<<"\n";
g.clear();
dis.clear();
for(int i=0;i<n;i++){
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
    dis[a]=-1;
    dis[b]=-1;
}
string qa,qb;
cin>>qa>>qb;
if(bfs(qa,qb)==1){
    camino(qa,qb);
}else{
    cout<<"No route\n";
}
ban=1;

}
return 0;
}

