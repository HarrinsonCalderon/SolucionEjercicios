#include<bits/stdc++.h>
using namespace std;

const int MAX=1000;
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
  if(len[fa]<len[fb]){
    swap(fa,fb);
  }
  len[fa]+=len[fb];
  padre[fb]=fa;
 }

};


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
bool ban=0;
string qq;
int n,a,b,rta1,rta2,ca;
string q;
cin>>ca;
while(ca--){
if(ban)cout<<"\n";
cin>>n;
ban=1;
dsu d;
d.iniciar(n);
rta1=rta2=0;
//cout<<n<<"\n";
cin.ignore();
while(getline(cin,q) && q.length()){
    //cout<<q<<"\n";
    stringstream s;
    s<<q;
    s>>qq;
    //cout<<qq[0]<<"\n";
    s>>a;
    s>>b;
    //cout<<a<<" "<<b<<"\n";
    if(qq[0]=='c'){
        d.merge_(a,b);
    }else if(qq[0]=='q'){
        if(d.find_(a)==d.find_(b)){
            rta1++;
        }else{
            rta2++;
        }
    }

}
cout<<rta1<<","<<rta2<<"\n";

}
return 0;
}

