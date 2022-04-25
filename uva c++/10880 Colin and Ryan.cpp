#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

ll c,r,n;
set<ll>s;
cin>>n;
for(ll j=1;j<=n;j++){
cin>>c>>r;
set<ll>s;
if(c==r){
  cout<<"Case #"<<j<<": 0";
}else{
cout<<"Case #"<<j<<":";
ll aux=c-r;
for(ll i=1;i*i<=c;i++){
    if((c-r)%i==0){
            s.insert(i);
            s.insert((c-r)/i);
    }
}
}
for(ll it:s){
    if(it>r){
           cout<<" "<<it;
    }

}
cout<<"\n";

}
}


