#include<bits/stdc++.h>
using namespace std;
int f(int n){
  string num=to_string(n);
  int rta=0;
  if(num.length()>1){
  for(int i=0;i<num.length();i++){
    rta+=num[i]-'0';
  }
  }
  return rta;
}
int main(){
//freopen ("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
string a,b;

while(getline(cin,a) && getline(cin,b)){
int acu1=0,acu2=0;
for(int i=0;i<a.length();i++){
    if(a[i]>='a' && a[i]<='z'){
        acu1+=a[i]-'a'+1;
    }else if(a[i]>='A' && a[i]<='Z'){
        acu1+=a[i]-'A'+1;
    }
}
for(int i=0;i<b.length();i++){
   if(b[i]>='a' && b[i]<='z'){
        acu2+=b[i]-'a'+1;
    }else if(b[i]>='A' && b[i]<='Z'){
        acu2+=b[i]-'A'+1;
    }
}

while(acu1>9){
    acu1=f(acu1);
}
while(acu2>9){
    acu2=f(acu2);
}

if(acu1!=0 && acu2!=0){
double rta=(double)min(acu1,acu2)/max(acu1,acu2);
rta*=100;
cout<<fixed<<setprecision(2)<<rta<<" %\n";
}
}
}

