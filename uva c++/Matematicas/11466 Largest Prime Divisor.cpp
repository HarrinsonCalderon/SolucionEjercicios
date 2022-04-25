#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);
//sieve();
ll n;
while(cin>>n && n){
n=abs(n);

ll rta=-1;
ll con=0;
for(ll i=2;i*i<=n && n!=1;i++){
    while(n%i==0){
       n/=i;
       rta=i;
    }
    if(rta==i){
        con++;
    }
}
if(n!=1 && rta!=-1){
    rta=n;
}else if(con==1){
    rta=-1;
}
cout<<rta<<"\n";
}
return 0;
}


