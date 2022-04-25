/*10370 <-subir*/
#include<bits/stdc++.h>
using namespace std;
int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int ca,n,acu=0,con=0;
double p;
cin>>ca;
while(ca--){
cin>>n;
int v[n];
for(int i=0;i<n;i++){
    cin>>v[i];
    acu+=v[i];
}
acu/=n;
for(int i=0;i<n;i++){
  if(v[i]>acu)con++;
}
p=((double)con*100)/(double)n;
cout<<fixed<<setprecision(3)<<p<<"%\n";
acu=con=0;
}
return 0;
}



