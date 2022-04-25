#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;

struct FenwickTree{
    vi ft;
    //indexamos desde 1
    void iniciar(ll n){ ft.assign(n + 1, 0); }

    void iniciar(vi &v){
        ft.assign(v.size() + 1, 0);
        for(ll i = 1; i <= v.size(); i++)
            actualizar(i, v[i - 1]);
    }
    //bit menos significativo en 1
    ll lsOne(ll n){ return n & (-n); }

    ll rsq(ll i){//suma de 1 hasta i
        ll acum = 0;
        for(; i; i -= lsOne(i)) acum+=ft[i];
        return acum;
    }

    ll rsq(ll i, ll j){//suma de i hasta j
        return rsq(j) - ((i==1)? 0: rsq(i - 1));
    }

    void actualizar(ll pos, ll n){//n = nuevo - anterior
        for(; pos < ft.size(); pos += lsOne(pos))
             ft[pos] += n;
            //ft[pos] = n-ft[pos];
    }
        void r(ll pos, ll n){//n = nuevo - anterior
        for(; pos < ft.size(); pos += lsOne(pos))
             ft[pos] += n*-1;
            //ft[pos] = n-ft[pos];
    }
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
ll n;
vector<ll>l;
cin>>n;
for(ll i=0;i<n;i++){
    ll x;cin>>x;
    l.push_back(x);
}
sort(l.begin(),l.end());
FenwickTree tr;
tr.iniciar(l);
//cout<<"- \n";
//for(ll i=1;i<=n;i++)cout<<tr.rsq(i,i)<<" ";
ll q,le,r;
cin>>q;
while(q--){
    cin>>le>>r;
    ll a,b;
    a=lower_bound(l.begin(),l.end(),le)-l.begin();
    b=upper_bound(l.begin(),l.end(),r)-l.begin();
    //b-=1;
    a+=1;
    //cout<<a<<" "<<b<<"\n";
    cout<<tr.rsq(a,b)<<"\n";
   // for(ll i=1;i<=n;i++)cout<<tr.rsq(i,i)<<" ";
   // cout<<"\n";
}

return 0;
}


