#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
int n,u,v,mz=0;
int it=1;
while(cin>>n && n){
map<int,vector<int>>g;
for(int i=0;i<n;i++){
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
}
int ttl;
while(cin>>u>>ttl && !(u==0 && ttl==0)){
    map<int,int>dis;
    queue<int>q;
    dis[u]=0;
    q.push(u);
    while(q.size()){
        int w=q.front();
        q.pop();
        for(int i=0;i<g[w].size();i++){
            int s=g[w][i];
            if(!dis.count(s)){
                dis[s]=dis[w]+1;
                q.push(s);
            }
        }
    }
    int con=0;
    for(auto i:dis){
        if(i.second>ttl){
            con++;
        }
        //cout<<i.first<<" "<<i.second<<"\n";
    }
   //cout<<g.size()<<" "<<dis.size()<<" "<<con<<"\n";
   con=(g.size()+con)-dis.size();
   cout<<"Case "<<it++<<": "<<con<<" nodes not reachable from node "<<u<<" with TTL = "<<ttl<<".\n";

}
}

return 0;
}


