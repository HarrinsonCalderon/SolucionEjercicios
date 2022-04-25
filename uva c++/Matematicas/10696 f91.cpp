
#include<bits/stdc++.h>
using namespace std;

int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int a;
while(cin>>a && a){
    if(a>=101){
        cout<<"f91("<<a<<") = "<<a-10<<"\n";
    }else{
        cout<<"f91("<<a<<") = "<<91<<"\n";
    }
}
return 0;
}



