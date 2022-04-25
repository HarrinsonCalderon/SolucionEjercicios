#include<bits/stdc++.h>
using namespace std;
const int M=103;
char m[M][M];
bool vis[M][M];
int dy[]={-1,0,1,0,-1,1,1,-1};
int dx[]={0,1,0,-1,1,1,-1,-1};
int con,i,l;
void dfs(int f,int c){
    if(f>=0 && f<i && c>=0 && c<l && m[f][c]=='W' && !vis[f][c]){
        con++;
        vis[f][c]=1;
        for(int i=0;i<8;i++){
            dfs(f+dy[i],c+dx[i]);
        }
    }
}
int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
string cad;
bool ban=false;
int ca;
cin>>ca;
cin.ignore(2);
while(ca--){
i=0;
l=0;
if(ban)cout<<"\n";
ban=true;
while(getline(cin,cad) && cad.length()>0){

    if(i==0){
        l=cad.length();
    }
    if(cad[0]=='W'|| cad[0]=='L'){
        for(int a=0;a<l;a++){
            m[i][a]=cad[a];
        }
        i++;
    }else{

    stringstream s;
    s<<cad;
    int f,c;
    s>>f;
    s>>c;
    memset(vis,0,sizeof(vis));
    con=0;
    dfs(f-1,c-1);
    cout<<con<<"\n";
    }
}
}
return 0;
}
