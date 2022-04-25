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
while(cin>>n && n){
long long g=0;
for(int i=1;i<n;i++){
 for(int j=i+1;j<=n;j++){
    g+=mcd(i,j);
 }
}
cout<<g<<"\n";
}
return 0;
}


