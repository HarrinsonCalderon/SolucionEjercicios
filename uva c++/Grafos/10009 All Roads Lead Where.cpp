#include<bits/stdc++.h>
using namespace std;
int p[27];
int x,y;
map<string,int>m1;
map<int,string>m2;
vector<string>sa;
void c(int y){
 if(y==x){
   // cout<<y<<" ";
    sa.push_back(m2[y]);
  return;
 }
 c(p[y]);
 //cout<<y;
 sa.push_back(m2[y]);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
int a,b,it=1,ca,it2=0;
cin>>ca;
while(ca--){
it=1;
if(it2)cout<<"\n";
it2++;
cin>>a>>b;
string u,v;
m1.clear();
m2.clear();
sa.clear();
map<int,vector<int>>g;
for(int i=0;i<a;i++){
    cin>>u>>v;
    if(!m1.count(u)){
        m1[u]=it;
        m2[m1[u]]=u;
        it++;
    }
    if(!m1.count(v)){
        m1[v]=it;
        m2[m1[v]]=v;
        it++;
    }
    g[m1[u]].push_back(m1[v]);
    g[m1[v]].push_back(m1[u]);
}
/*
for(int i=0;i<g.size();i++){

    for(int j=0;j<g[i].size();j++){
        cout<<m2[g[i][j]]<<" ";
    }
    cout<<"\n";
}*/
for(int i=0;i<b;i++){
    cin>>u>>v;
      x=m1[u];
      y=m1[v];

    int dis[g.size()+1];

    memset(dis,-1,sizeof(dis));
    memset(p,0,sizeof(p));
    queue<int>q;
    q.push(x);
    dis[x]=0;
    while(q.size()){
        int w=q.front();
        q.pop();
        for(int i=0;i<g[w].size();i++){
            int z=g[w][i];
            if(dis[z]==-1){
               dis[z]=dis[w]+1;
               p[z]=w;
               q.push(z);
            }

        }
    }
    sa.clear();
    c(y);
    for(int i=0;i<sa.size();i++){
        cout<<sa[i][0]<<"";
    }
    cout<<"\n";
}

}
return 0;
}


