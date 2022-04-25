#include<bits/stdc++.h>
using namespace std;

int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
while(cin>>n){
int con=0;
for(int i=n+1;i<=2*n;i++){
    if((n*i)%(i-n)==0){
        con++;
    }
}
cout<<con<<"\n";
for(int i=n+1;i<=2*n;i++){
    if((n*i)%(i-n)==0){
        cout<<1<<"/"<<n<<" = "<<1<<"/"<<(n*i)/(i-n)<<" + "<<1<<"/"<<i<<"\n";
    }
}
}
return 0;
}

///10976 - Fractions Again?!

