#include<bits/stdc++.h>
using namespace std;

int main(){
///freopen("in.txt","r",stdin);
///freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
string q1 = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
string q2 = "!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
string d1 = "123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'";
string d2 = "!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
string cad;
while(getline(cin,cad)){
for(int i=0;i<cad.length();i++){
  bool ban=0;
  for(int j=0;j<q1.length();j++){
    if(cad[i]==q1[j]){
        cout<<d1[j];
        ban=1;
    }
  }
  for(int j=0;j<q2.length();j++){
    if(cad[i]==q2[j]){
        cout<<d2[j];
        ban=1;
    }
  }
  if(!ban){
    cout<<cad[i];
  }
}
cout<<"\n";
}

return 0;
}


