#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
int n,a,u,v;

while(cin>>n>>a && (n || a)){
int e[n+1];
vector<int>g[n+1];
memset(e,0,sizeof(e));
while(a--){
    cin>>u>>v;
    g[u].push_back(v);
    e[v]++;
}
queue<int>q;
vector<int>l;
for(int i=1;i<=n;i++){
    if(e[i]==0){
        q.push(i);
    }
}
int s;
while(q.size()){
    s=q.front();
    q.pop();
    l.push_back(s);
    for(int i=0;i<g[s].size();i++){
        int ii=g[s][i];
        e[ii]--;
        if(e[ii]==0){
            q.push(ii);
        }
    }
}

for(int i=0;i<n;i++){
    if(!i)cout<<l[i];
    else cout<<" "<<l[i];
}
cout<<"\n";
}
return 0;
}
