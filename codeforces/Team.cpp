#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
int a,b,c,con=0;
cin>>n;
while(n--){
    cin>>a>>b>>c;
    if(a+b+c>=2){
        con++;
    }
}
cout<<con<<"\n";

return 0;
}
