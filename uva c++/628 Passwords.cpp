#include<bits/stdc++.h>
using namespace std;
vector<string>d;
string r;
int n,m;
string numb[]{"0","1","2","3","4","5","6","7","8","9"};
void rec(int it,string cad){
 if(it==r.length()){
    cout<<cad<<"\n";
    return;
 }
 if(r[it]=='0'){
    for(int i=0;i<10;i++){
        rec(it+1,cad+numb[i]);

    }
 }else if(r[it]=='#'){
   for(int i=0;i<n;i++){
        rec(it+1,cad+d[i]);

    }
 }
}
int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
while(cin>>n){
 d.clear();
 for(int i=0;i<n;i++){
    string aux;
    cin>>aux;
    d.push_back(aux);
 }
 cin>>m;
 cout<<"--\n";
 for(int i=0;i<m;i++){
    cin>>r;
    rec(0,"");
 }
 }
return 0;
}



