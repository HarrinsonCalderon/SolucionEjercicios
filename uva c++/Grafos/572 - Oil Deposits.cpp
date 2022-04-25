#include<bits/stdc++.h>
using namespace std;
const int M=103;
int n,mm,con=0;
char m[M][M];
bool vis[M][M];
int dy[]={-1,0,1,0,-1,1,1,-1};
int dx[]={0,1,0,-1,1,1,-1,-1};
void dfs(int i,int j){
 if(i>=0 && i<n && j>=0 && j<mm && m[i][j]=='@' && !vis[i][j]){
    vis[i][j]=1;
    m[i][j]='*';
    for(int q=0;q<8;q++){
        dfs(i+dy[q],j+dx[q]);
    }
 }
}
int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
 char aux;
 int it=1;
 while(cin>>n>>mm && n && mm){
 for(int i=0;i<n;i++){
    for(int j=0;j<mm;j++){
    cin>>aux;
    m[i][j]=aux;
    }
 }
  con=0;
  memset(vis,0,sizeof(vis));
  for(int i=0;i<n;i++){
    for(int j=0;j<mm;j++){
     if(m[i][j]=='@'){
        con++;
        dfs(i,j);
     }
    }
 }
 cout<<con<<"\n";
 it++;
}
return 0;
}

