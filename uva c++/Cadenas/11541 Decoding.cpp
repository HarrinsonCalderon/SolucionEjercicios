#include<bits/stdc++.h>
using namespace std;

int main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int ca;
cin>>ca;
int m=1;
while(ca--){
string cad;
cin>>cad;
vector<char>a;
vector<string>b;
for(int i=0;i<cad.length();i++){
    if(cad[i]>='A' && cad[i]<='Z'){
        a.push_back(cad[i]);
    }else{
        int con=0;
        for(int j=i;j<cad.length();j++){
           if(!(cad[j]>='A' && cad[j]<='Z')){
            con++;
           }else{
            break;
           }
        }
        string aux=cad.substr(i,con);
        b.push_back(aux);
        i+=con-1;
    }
}
cout<<"Case "<<m++<<": ";
for(int i=0;i<a.size();i++){
 stringstream s;
 s<<b[i];
 int pos;
 s>>pos;
 for(int j=0;j<pos;j++){
    cout<<a[i];
 }
}
cout<<"\n";

}
return 0;
}


