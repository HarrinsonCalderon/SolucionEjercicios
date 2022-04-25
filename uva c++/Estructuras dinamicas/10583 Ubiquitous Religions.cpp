#include<bits/stdc++.h>
using namespace std;
int rta;
const   int MAX=50005;
struct dsu{
int padre[MAX],len[MAX];
bool vis[MAX];


void iniciar(int n){
    //indexar desde 0,1 depende del prgblema
    for(int i=1;i<=n;i++){
        padre[i]=i;
        len[i]=1;
    }
    memset(vis,0,sizeof(vis));
}
int find_(int x){
  if(padre[x]==x){
    return x;
  }
  return find_(padre[x]);
}

//El padre de a, que apunte a el padre de b
void merge_(int a,int b){
  padre[find_(a)]=find_(b);
}


//si a y b estan en el mismo conjunto
bool mismo_grupo(int a,int b){
 return padre[a]==padre[b];
}



///Comprension de caminos
int find_c(int x){
  if(padre[x]==x){
    return x;
  }
  return padre[x]=find_(padre[x]);
}
//pasar conjunto mas pequeño al mas grande
 void merge_c(int a,int b){ //a sera el mas grande, b el mas pequeño
  int fa=find_c(a);
  int fb=find_c(b);
  if(fa!=fb){
   rta--;
  if(len[fa]<len[fb]){
    swap(fa,fb);
  }
  len[fa]+=len[fb];
  padre[fb]=fa;
 }
}

};


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);

int n,q,a,b,it=1;
while(cin>>n>>q && n ){
    set<int>s;
    rta=n;
    dsu d;
    d.iniciar(n);
    for(int i=0;i<q;i++){
        cin>>a>>b;
        d.merge_c(a,b);
    }
    cout<<"Case "<<it++<<": ";
    cout<<rta<<"\n";
}
return 0;
}

