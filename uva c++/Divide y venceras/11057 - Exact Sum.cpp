#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,m,a,b,it=0;

while(cin>>n){
int v[n];
vector<int>li;
for(int i=0;i<n;i++){
    cin>>v[i];
}
cin>>m;
int h=1000001;
int l=1;
sort(v,v+n);
int mi=1e9;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(v[i]+v[j]==m && v[j]-v[i]<mi){
           a=v[i];
           b=v[j];
           mi=b-a;
        }
    }
}
cout<<"Peter should buy books whose prices are "<<a<<" and "<<b<<".\n";
if(!it){

    cout<<"\n";
}
}
return 0;
}
