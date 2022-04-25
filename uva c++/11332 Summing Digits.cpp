#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n==0){
        return 0;
    }else{
        return n%10+f(n/10);
    }

}
int main(){
int n;
while(cin>>n && n) {
    while(n>=10){
        n=f(n);
    }
    cout<<n<<"\n";
}

}


