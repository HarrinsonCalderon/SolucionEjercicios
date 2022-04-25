#include<bits/stdc++.h>
using namespace std;

int mcd(int a, int b){
 return a?mcd(b%a,a):b;
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);
int n;
cin>>n;
cin.ignore();
while(n--){
    string cad;
    getline(cin,cad);
    stringstream s;
    s<<cad;
    vector<int>v;
    int x;
    while(s>>x){
        v.push_back(x);
    }
    int g=0;
    for(int i=0;i<v.size();i++){
     for(int j=i+1;j<v.size();j++){
        g=max(g,mcd(v[i],v[j]));
     }
    }
    cout<<g<<"\n";
}
return 0;
}


