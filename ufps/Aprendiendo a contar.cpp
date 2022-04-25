#include<bits/stdc++.h>
using namespace std;

int main(){
int dif,a,aux=0,con=0,ca,m;
string cad,aux2;
cin>>ca;
while(ca--){
vector<int>l;
cin>>dif;
cin.ignore();
getline(cin,cad);
stringstream s(cad);
while(s>>aux2){
   m=atoi(aux2.c_str());
   l.push_back(m);
}

for(int i=0;i<l.size();i++){
    a=l[i];
     if(!aux){
        if(a>100){
            con++;
        }
    }else{
    if(aux>a || a>100 || fabs(a-aux)>dif){
     con++;
    }
    }
    //cout<<"aux "<<aux<<" a "<<a<<"\n";
    aux=a;
}

cout<<con<<"\n";
if(!con)cout<<"Bien\n";
else cout<<"Mal\n";
con=aux=0;
}
}

