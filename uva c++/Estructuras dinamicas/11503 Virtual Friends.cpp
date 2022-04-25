#include<bits/stdc++.h>
using namespace std;

const   int MAX=100005;
struct dsu{
int padre[MAX],len[MAX];


void iniciar(int n){
    //indexar desde 0,1 depende del prgblema
    for(int i=1;i<=n;i++){
        padre[i]=i;
        len[i]=1;
    }
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
int n,it=1;
const int mz=100002;
int ca;
cin>>ca;
while(ca--){
map<string,int>m;
string p1,p2;
cin>>n;
dsu d;
it=1;
d.iniciar(mz);
while(n--){
    cin>>p1>>p2;
    if(!m.count(p1)){
        m[p1]=it;
        it++;
    }
    if(!m.count(p2)){
        m[p2]=it;
        it++;
    }
    int a,b;
    a=m[p1];
    b=m[p2];
    d.merge_c(a,b);

    int pos1=d.find_c(a);

    cout<<d.len[pos1]<<"\n";
}
}
return 0;
}

