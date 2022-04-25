#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

struct FenwickTree{
    vi ft;
    //indexamos desde 1
    void iniciar(int n){ ft.assign(n + 1, 0); }

    void iniciar(vi &v){
        ft.assign(v.size() + 1, 0);
        for(int i = 1; i <= v.size(); i++)
            actualizar(i, v[i - 1]);
    }
    //bit menos significativo en 1
    int lsOne(int n){ return n & (-n); }

    int rsq(int i){//suma de 1 hasta i
        int acum = 0;
        for(; i; i -= lsOne(i)) acum+=ft[i];
        return acum;
    }

    int rsq(int i, int j){//suma de i hasta j
        return rsq(j) - ((i==1)? 0: rsq(i - 1));
    }

    void actualizar(int pos, int n){//n = nuevo - anterior
        for(; pos < ft.size(); pos += lsOne(pos))
             ft[pos] += n;
            //ft[pos] = n-ft[pos];
    }
        void r(int pos, int n){//n = nuevo - anterior
        for(; pos < ft.size(); pos += lsOne(pos))
             ft[pos] += n*-1;
            //ft[pos] = n-ft[pos];
    }
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int ca,it=1;
int n,q,a,b,c;
cin>>ca;
while(ca--){
cout<<"Case "<<it++<<":\n";
cin>>n>>q;
vector<int>l;
for(int i=0;i<n;i++){
    int x;cin>>x;
    l.push_back(x);
}
FenwickTree t;
t.iniciar(l);

while(q--){
    cin>>a>>b;
    if(a!=1){
        cin>>c;
    }
    if(a==1){
        cout<<t.rsq(b+1,b+1)<<"\n";
        t.r(b+1,t.rsq(b+1,b+1));
    }else if(a==2){
        t.actualizar(b+1,c);
    }else{
        cout<<t.rsq(b+1,c+1)<<"\n";
    }

}
}
return 0;
}
