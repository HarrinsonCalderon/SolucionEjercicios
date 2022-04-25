#include<bits/stdc++.h>
using namespace std;
vector<int>grafo[1004];
int N;
bool vis[1004];
void dfs(int u){
    vis[u]=true;
    for(int i=0;i<grafo[u].size();i++){
        int v=grafo[u][i];
        if(!vis[v]){
            dfs(v);
        }
    }
}
void init(){
memset(vis,false,sizeof(vis));
for(int i=0;i<N;i++){
    grafo[i].clear();
}
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int c;
char n;
string cad;
cin>>c;

while(c--){

cin>>n;
cin.ignore();
N=(int)n-65+1;
init();

    while((getline(cin,cad)) && cad!=""){
    //cout<<(int)a-65<<" "<<(int)b-65<<"\n";
    grafo[(int)cad[0]-65].push_back((int)cad[1]-65);
    grafo[(int)cad[1]-65].push_back((int)cad[0]-65);

}
int it=0;
for(int i=0;i<N;i++){
    if(!vis[i]){
        dfs(i);
        it++;
    }
}
cout<<it<<"\n";
if(c!=0){
      cout<<"\n";
}


}
return 0;
}

