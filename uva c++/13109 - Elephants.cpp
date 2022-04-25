
#include<bits/stdc++.h>
using namespace std;
int main(){
int c,n,ma,con=0,acu=0;
cin>>c;
while(c--){
    cin>>n>>ma;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v,v+n);
    for(int i=0;i<n;i++){
        acu+=v[i];
        if(acu>=ma)break;
        else con++;
    }
    cout<<con<<"\n";
    con=acu=0;
}
return 0;
}
