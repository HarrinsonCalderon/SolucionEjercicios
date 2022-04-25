#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);
ll n;
while(cin>>n){
    if(n==1){
        cout<<"1\n";
    }else{
    ll row=1+(n/2);
    ll n=row*row;
    ll m=2*n-1;
    //cout<<row<<" "<<n<<" "<<m<<"\n";
    cout<<m+(m-2)+(m-4)<<"\n";
    }
}
return 0;
}


