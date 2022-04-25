#include<bits/stdc++.h>
using namespace std;

int m(int n){
 if(n<=100)
    return m(m(n+11));
 else
    return n-10;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);


int n;
while(cin>>n && n){
  cout<<"f91("<<n<<") = "<<m(n)<<"\n";
}
return 0;
}


