#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int f,c,n,fila,colum,b,con;
bool ban=false;

while(cin>>f>>c>>n &&f&&c&&n){
vector<string>l;
string aux;
for(int i=0;i<f;i++){
    cin>>aux;
    l.push_back(aux);
}
ban=0;
fila=0;
colum=n;
colum--;
con=0;
int m[f][c];
memset(m,-1,sizeof(m));
m[fila][colum]=0;
while(true){

    if(l[fila][colum]=='N'){
        fila--;
    }else if(l[fila][colum]=='S'){
        fila++;
    }else if(l[fila][colum]=='E'){
        colum++;
    }else if(l[fila][colum]=='W'){
        colum--;
    }
    con++;
    if(fila<0 || colum<0 || fila>=f || colum>=c)break;

    if(m[fila][colum]==-1){
        m[fila][colum]=con;
    }else{
     ban=true;
     break;
    }

}
if(ban)
cout<<m[fila][colum]<<" step(s) before a loop of "<<con-m[fila][colum]<<" step(s)\n";
else
cout<<con<<" step(s) to exit\n";
con=0;
}
return 0;
}
