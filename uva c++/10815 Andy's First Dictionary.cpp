#include<bits/stdc++.h>
using namespace std;

int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

string cad;
set<string>s;
while(cin>>cad){
     string aux="";

     for(int i=0;i<cad.length();i++){
        if((cad[i]>='a' && cad[i]<='z') || (cad[i]>='A' && cad[i]<='Z')){
          cad[i]=tolower(cad[i]);
          aux+=cad[i];
        }else{
         if(aux!="")s.insert(aux);
         aux="";
        }
     }
     if(aux!="")s.insert(aux);
}
for(string it:s){
    cout<<it<<"\n";
}
return 0;
}


