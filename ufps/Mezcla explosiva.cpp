#include<bits/stdc++.h>
using namespace std;
int p,q,r,s,t,u;


double f2(double x){
     return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}
double bis2(){
  double lo = 0, hi = 1,m,EPS=1e-9;
  while (hi-lo>EPS){
     m = (lo+hi)/2;
    if (f2(lo) * f2(m) <= 0){
      hi = m;
    } else {
      lo = m;
    }
  }
  return lo;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
  while(cin>>p>>q>>r>>s>>t>>u){
    if(f2(0)*f2(1)>0){
       cout<<"No explosiva\n";
    }else{
        double rta=bis2();
        cout<<fixed<<setprecision(3)<<bis2()<<"\n";
    }
  }
}

