#include<bits/stdc++.h>
using namespace std;

int main(){
 //freopen("in.txt", "r", stdin);
 //freopen("out.txt", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,a,b;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a>>b;
    double x=((a*(double)9)/5)+32;
    double y=b;
    double z=x+y;
    cout<<"Case "<<i<<": ";
    cout<<fixed<<setprecision(2)<<((-32+z)*5)/9<<"\n";
  }
}

