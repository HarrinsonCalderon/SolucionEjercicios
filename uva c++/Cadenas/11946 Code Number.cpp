#include<bits/stdc++.h>
using namespace std;


int main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

map<char,char>m;
m['1']='I';
m['2']='Z';
m['3']='E';
m['4']='A';
m['5']='S';
m['6']='G';
m['7']='T';
m['8']='B';
m['9']='P';
m['0']='O';
int n;
string cad;
cin>>n;
cin.ignore();
int b=0;
while(n--){
if(b!=0)cout<<"\n";
while(getline(cin,cad) && cad.length()){
for(int i=0;i<cad.length();i++){
    if(m.count(cad[i])){
        cout<<m[cad[i]];
    }else{
        cout<<cad[i];
    }
}
cout<<"\n";
b++;
}
}
return 0;
}




