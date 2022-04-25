#include<bits/stdc++.h>
using namespace std;

int m(int n){
 if(n<=100)
    return m(m(n+11));
 else
    return n-10;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);


int n,con=0,ca=1;
int q;
cin>>q;
while(q--){
cin>>n;
con=0;
cout<<"Case #"<<ca++<<": "<<n;
for(int i=2;con<2;i++){
    if(n%i==0){
        cout<<" = "<<i<<" * "<<n/i;
        con++;
    }
}
cout<<"\n";
}
return 0;
}


