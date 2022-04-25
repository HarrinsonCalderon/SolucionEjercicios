#include<bits/stdc++.h>
using namespace std;

struct cla{
string nombre;
int d,m,a;
};
bool cmp(cla a,cla b){
 if(a.a>=b.a){
    if(a.a>b.a){
    return a.a>b.a;
    }else if(a.a==b.a){
        if(a.m>=b.m){
            if(a.m>b.m){
                return a.m>b.m;
            }else if(a.m==b.m){
                if(a.d>=b.d){

                    return a.d>=b.d;
                }else if(a.d<b.d){
                    return a.d>b.d;
                }
            }
        }else if(a.m<b.m){
            return a.m>b.m;
        }
    }

 }else if(a.a<b.a){
    return a.a>b.a;
 }
}
int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
cla v[n];
for(int i=0;i<n;i++){
    cin>>v[i].nombre>>v[i].d>>v[i].m>>v[i].a;
}

sort(v,v+n,cmp);
for(int i=0;i<n;i++){
  //  cout<<v[i].nombre<<" "<<v[i].d<<" "<<v[i].m<<" "<<v[i].a<<"\n";
}
cout<<v[0].nombre<<"\n";
cout<<v[n-1].nombre<<"\n";
}


