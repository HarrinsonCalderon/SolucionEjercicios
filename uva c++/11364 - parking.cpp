#include<bits/stdc++.h>
using namespace std;

int main(){
int c,n,ma=0,me=10e2;
cin>>c;
while(c--){
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
        ma=max(ma,v[i]);
        me=min(me,v[i]);
    }
    //cout<<ma<<" "<<me<<"\n";
    cout<<(ma-me)*2<<"\n";
    me=10e2;
    ma=0;
}
return 0;
}
