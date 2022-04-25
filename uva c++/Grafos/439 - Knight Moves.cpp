#include<bits/stdc++.h>
using namespace std;
const int MAX=200;
bool vis[MAX][MAX];

int vvx[]={1,-1,1,2,2,1,-1,-2};
int vvy[]={-2,2,2,1,-1,-2,-2,-1};

int vx[]={1,1,-1,-1,2,2,-2,-2};
int vy[]={2,-2,2,-2,1,-1,1,-1};

struct clas{
int d,x,y;
clas(int xi,int yi,int di):x(xi),y(yi),d(di){}
};
int bfs(int f1,int c1,int f2,int c2){
memset(vis,0,sizeof(vis));
clas init(f1,c1,0);

queue<clas>cola;
cola.push(init);
while(!cola.empty()){
 clas aux=cola.front();
 cola.pop();
 if(aux.x==f2 && aux.y==c2)return aux.d;
 if(vis[aux.x][aux.y])continue;
 vis[aux.x][aux.y]=true;
 for(int i=0;i<=7;i++){
    int x=aux.x+vx[i];
    int y=aux.y+vy[i];
    if(x>=1 && x<8 && y>=1 && y<8){
        clas ne(x,y,aux.d+1);
        cola.push(ne);
    }

 }
}
return -1;
}
int main(){
string a,b;
int f1,c1,f2,c2;
while(cin>>a>>b){
f1=((int)a[0]-'a')+1;
c1=((int)a[1]-'0');
f2=((int)b[0]-'a')+1;
c2=((int)b[1]-'0');
cout<<"To get from "<<a<<" to "<<b<<" takes "<<bfs(f1,c1,f2,c2)<<" knight moves."<<"\n";
}
/*corregir*/
return 0;
}
