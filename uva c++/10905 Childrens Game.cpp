#include<bits/stdc++.h>
using namespace std;

bool cmp(string a,string b){
  //return b+a>a+b;
  return a+b>b+a;
}

int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

int n;
string a;
while(cin>>n && n){
vector<string>v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end(),cmp);
for(int i=0;i<n;i++){
    cout<<v[i];
}
cout<<"\n";
}
}


