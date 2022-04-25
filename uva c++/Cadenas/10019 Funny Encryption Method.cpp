#include<bits/stdc++.h>
using namespace std;




int main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int ca;
cin>>ca;
while(ca--){
int a;
string b;
cin>>a;
b=to_string(a);
stringstream s;
s<<hex<<b;
unsigned n;
s>>n;
bitset<32>bi(n);
int b2=0;
for(int i=0;i<bi.size();i++){
    if(bi[i]==true)b2++;
}
int b1=__builtin_popcount(a);
cout<<b1<<" "<<b2<<"\n";
}
return 0;
}


