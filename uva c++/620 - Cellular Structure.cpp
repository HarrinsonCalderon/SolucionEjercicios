#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
string cad;
cin>>n;
while(n--){
cin>>cad;

if(cad.length()%2==0 || cad.length()==1 && cad[0]!='A'){
     cout<<"MUTANTE\n";
}else
if(cad.length()==1){
    if(cad[0]=='A'){
        cout<<"SIMPLE\n";
    }
}else{
    if(cad[0]=='B' && cad[cad.length()-1]=='A'){
        cout<<"MUTAGENIC\n";
    }else if(cad[cad.length()-2]=='A' && cad[cad.length()-1]=='B'){
        cout<<"FULLY-GROWN\n";
    }else{
        cout<<"MUTANT\n";
    }
}
}
}

