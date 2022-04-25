#include<bits/stdc++.h>
using namespace std;

int main(){
//freopen ("in.txt","r",stdin);
 //freopen("out.txt","w",stdout);
int n,m,x,y,ca,sa=0;
cin>>ca;
cin.ignore();
while(ca--){

cin>>n>>m;
vector<int>g[1002];
for(int i=0;i<m;i++){
    cin>>x>>y;
    if(!binary_search(g[x].begin(), g[x].end(), y) && !binary_search(g[y].begin(), g[y].end(), x)){
    g[x].push_back(y);
    g[y].push_back(x);
    }

}

int dis[n];
memset(dis,0,sizeof(dis));
queue<int>c;
c.push(0);
dis[0]=0;
while(c.size()){
    int u=c.front();
    c.pop();
    for(int i=0;i<g[u].size();i++){
        int v=g[u][i];
        if(dis[v]==0){
           dis[v]=dis[u]+1;
           c.push(v);
        }
    }


}
if(sa)cout<<"\n";
 for(int i=1;i<n;i++){
    cout<<dis[i]<<"\n";
}
sa++;
}
return 0;
}


