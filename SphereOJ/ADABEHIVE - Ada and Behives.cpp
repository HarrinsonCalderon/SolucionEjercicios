#include<bits/stdc++.h>
using namespace std;
#define MAXN 2040
typedef long long int ll;
ll n,m;
ll a[MAXN][MAXN],tree[MAXN][MAXN];
ll lowbit(ll x)
{
	return x&-x;
}
void agregar(ll x,ll y,ll p)
{
	for(ll i=x;i<=n;i+=lowbit(i))
		for(ll j=y;j<=m;j+=lowbit(j))
			tree[i][j]+=p;
}
ll sum(ll x,ll y)
{
    ll result=0;
	for(ll i=x;i>0;i-=lowbit(i))
		for(ll j=y;j>0;j-=lowbit(j))
			result+=tree[i][j];
    return result;
}
ll suma(ll x1,ll y1,ll x2,ll y2)//left-top right-low
{
    return sum(x2,y2)+sum(x1-1,y1-1)-sum(x2,y1-1)-sum(x1-1,y2);
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
ll q;
cin>>n>>m>>q;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
       cin>>a[i][j];
       agregar(i,j,a[i][j]);
    }
}
ll a,b,c,d,e;
while(q--){
  cin>>a;
  if(a==2){
    cin>>b>>c>>d>>e;
    cout<<suma(b,c,d,e)<<"\n";
  }else{
    cin>>b>>c>>d;
    agregar(b,c,d);
  }
}
return 0;
}


