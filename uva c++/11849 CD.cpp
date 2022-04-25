#include<bits/stdc++.h>
using namespace std;

int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,m;
while(cin>>n>>m && n && m){
    set<int>s;
    while(n--){
        int a;
        cin>>a;
        s.insert(a);
    }
    int con=0;
     while(m--){
        int a;
        cin>>a;
        if(s.count(a))con++;
    }
    cout<<con<<"\n";
}
}


