#include<bits/stdc++.h>
using namespace std;
int fi,ci,ff,cf,n,ax,ay;
const int M=503;
bool m[M][M];
struct cla{
int x,y,d;
cla(int xi,int yi,int di):x(xi),y(yi),d(di){}
};

//int vx[]={-2,-1,1,2,2,1,-1,-2};
//int vy[]={1,2,2,1,-1,-2,-2,-1};
int vx[]={1,-1,1,2,2,1,-1,-2};
int vy[]={-2,2,2,1,-1,-2,-2,-1};
bool vali(int a){
    return a>=0 && a<n;
}
int bfs(){
cla ini(fi,ci,0);
queue<cla>c;
c.push(ini);
while(!c.empty()){
    cla aux=c.front();
    c.pop();
    if(aux.x==ff && aux.y==cf)
        return aux.d;
    if(m[aux.x][aux.y])
        continue;
       m[aux.x][aux.y]=true;
    for(int i=0;i<=7;i++){
        ax=aux.x+vx[i];
        ay=aux.y+vy[i];
        if(vali(ax) && vali(ay)){
            cla aux2(ax,ay,aux.d+1);
            c.push(aux2);
        }
    }

}
return -1;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
while(cin>>n){
cin>>fi>>ci>>ff>>cf;
memset(m,false,sizeof(m));
cout<<bfs()<<"\n";
}
return 0;
}
