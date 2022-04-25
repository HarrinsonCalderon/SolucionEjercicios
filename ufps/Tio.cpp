#include<bits/stdc++.h>
using namespace std;

int main(){
long long p,k,n,l,h,m;
h=1e9;

while(cin>>p>>k>>n){
    l=0;
    h=1e9;
    while(h-l>1){
        m=(h+l)/2;
        if(k+((m*(m+1))/2)>n+(p*m)){
            h=m;
        }else{
            l=m;
        }
    }
    cout<<h<<"\n";

}
return 0;
}
