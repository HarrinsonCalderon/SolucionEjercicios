#include<bits/stdc++.h>
using namespace std;
int main(){

string a,b,c,d;
while(getline(cin,a) && getline(cin,b)){
c+=a[0];
for(int i=1;i<a.length();i++){
    char aux=a[i];
    if(aux==' '){
        c+=a[i+1];
    }
}
d+=b[0];
for(int i=1;i<b.length();i++){
    char aux=b[i];
    if(aux==' '){
        d+=b[i+1];
    }
}
if(c==d)cout<<"yes\n";
else cout<<"no\n";
c=d="";
}
return 0;
}

