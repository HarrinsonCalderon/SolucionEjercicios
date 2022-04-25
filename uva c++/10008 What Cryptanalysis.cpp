#include<bits/stdc++.h>


using namespace std;
struct cla{
int cant=0;
char letra;
};
bool cmp(cla a,cla b){
if(a.cant!=b.cant){
    return a.cant>b.cant;
}else{
    return a.letra<b.letra;
}

}

int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
string cad;

cin>>n;
cin.ignore(1);

map<char,int>mapa;
while(n--){
 getline(cin,cad);
    for(int i=0;i<cad.length();i++){
        if(cad[i]>='a' && cad[i]<='z' || cad[i]>='A' && cad[i]<='Z' ){
             cad[i] = toupper(cad[i]);
            mapa[cad[i]]++;
        }
    }
}
map<char,int>::iterator it;
cla v[26];
int i=0;
for(it=mapa.begin();it!=mapa.end();it++){
    v[i].cant=it->second;
    v[i].letra=it->first;
    i++;
}
sort(v,v+i,cmp);
for(int j=0;j<i;j++){
    cout<<v[j].letra<<" "<<v[j].cant<<"\n";
}
return 0;
}


