#include<bits/stdc++.h>
using namespace std;


int main(){
int a,b,c,acu=0,suma=0;

while(cin>>a>>b>>c){
acu=a;
while(acu<b){
    acu+=c;
    suma++;
}
cout<<suma<<"\n";
suma=acu=0;
}
return 0;
}
