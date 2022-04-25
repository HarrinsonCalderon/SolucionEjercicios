#include<bits/stdc++.h>
using namespace std;
int main(){
    double n=1,cal=0;
    while(cin>>n){
        if(n==0){
            break;
        }
        if(n<0){
            n*=-1;
        }
    cal=(n*(n+1)*(2*n+1))/6;
    cout<<cal<<"\n";
    }
    return 0;
    }
