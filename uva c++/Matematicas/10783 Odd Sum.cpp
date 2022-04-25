
#include<bits/stdc++.h>
using namespace std;
int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int ca,a,b,acu=0;
cin>>ca;
for(int i=1;i<=ca;i++){
    cin>>a>>b;
    for(int j=a;j<=b;j++){
        if(j%2!=0)acu+=j;
    }
    cout<<"Case "<<i<<": "<<acu<<"\n";
    acu=0;
}
return 0;
}



