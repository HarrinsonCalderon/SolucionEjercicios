#include<bits/stdc++.h>
using namespace std;

int main(){
int n,a;
string cad;
vector<string>lista;
map<char,bool>mapa;
cin>>n;
while(n--){
cin>>a;


for(int i=0;i<a;i++){
    cin>>cad;
    if(!mapa[cad[0]] && cad.length()>1){
        if(cad[0]=='A'){
        mapa[cad[0]]=true;
        lista.push_back(cad);
        }else{
            int aux=(int)cad[0]-1;
             if(mapa[(char)aux]){
                mapa[cad[0]]=true;
                lista.push_back(cad);
             }
        }


    }
}

}
map<char,bool>::iterator it;
for(it=mapa.begin();it!=mapa.end();it++){
    cout<<it->first<<"\n";
}
for(int i=0;i<lista.size();i++){
    cout<<lista[i]<<"\n";
}
return 0;
}
