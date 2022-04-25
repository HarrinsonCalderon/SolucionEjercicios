
#include<bits/stdc++.h>
using namespace std;
int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
long long a,b,con=0;
while(cin>>a>>b){
while(a<b){
    b-=a;
    a++;
}
cout<<a<<"\n";
}
return 0;
}



