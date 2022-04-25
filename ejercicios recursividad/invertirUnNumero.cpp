#include<bits/stdc++.h>
using namespace std;
void m(int n){
    if(log10(n)+1>0){
        cout<<n%10;
        n/=10;
        m(n);
    }
}
int main(){
int n=1234560;
m(n);

return 0;
}
