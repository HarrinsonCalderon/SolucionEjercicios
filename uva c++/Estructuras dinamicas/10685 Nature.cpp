#include<bits/stdc++.h>
using namespace std;

const   int MAX=100005;
struct dsu{
int padre[MAX],len[MAX];
int ma=1;

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
  ma=max(len[fa],ma);
  padre[fb]=fa;
 }
}
};


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
int n,q,it,sa=0,mm;
string a,b;
while(cin>>n>>q && n){
mm=n;
dsu d;
d.iniciar(n);
map<string,int>m;
it=1;
while(n--){
    cin>>a;
    m[a]=it;
    it++;
}
while(q--){
    cin>>a>>b;
    d.merge_c(m[a],m[b]);
}


//cout<<"\n";
cout<<d.ma<<"\n";
}
return 0;
}

