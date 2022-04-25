#include<bits/stdc++.h>
using namespace std;
vector<int>s,b;
int v[10000];
int n,m,rta=0;
void rec(int i,int acu){
 if(i==m){
    if(acu>=rta){
        rta=acu;
        s.clear();
        for(int it:b){
         s.push_back(it);
        }
    }
    return;
 }
 rec(i+1,acu);
 if(v[i]+acu<=n){
     b.push_back(v[i]);
     rec(i+1,acu+v[i]);
     b.pop_back();
 }
}
int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

while(cin>>n>>m){
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    s.clear();b.clear();
    rta=0;
    rec(0,0);

    for(int it:s){
        cout<<it<<" ";
    }
    cout<<"sum:"<<rta<<"\n";
}

return 0;
}

///10976 - Fractions Again?!

