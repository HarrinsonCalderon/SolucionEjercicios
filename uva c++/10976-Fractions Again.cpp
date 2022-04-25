#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a * (b / gcd(a, b)); }
int validar(int a,int b){
    int n=lcm(a,b),d,g;
    d=n/a;
    d-=n/b;
    g=gcd(d,n);
    d/=g;
    n/=g;
    if(d==1){
        return n;
    }
    return -1;
}
struct cla{
int x,y;
}v[10002];
int main(){
/*
 freopen("in.txt", "r", stdin);
 freopen("out.txt", "w", stdout);
*/
ios_base::sync_with_stdio(0);
cin.tie(0);
string s;
int n,aux,con=0;;
while(cin>>n){

for(int i=n+1;i<=2*n;i++){
     aux=validar(n,i);
    if(aux!=-1){
    v[con].x=aux;
    v[con].y=i;
    con++;
    }
}
cout<<con<<"\n";
for(int i=0;i<con;i++){
    cout<<"1/"<<n<<" = "<<"1/"<<v[i].x<<" + 1/"<<v[i].y<<"\n";
}
con=0;
}
return 0;
}

