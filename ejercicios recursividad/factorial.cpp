#include<bits/stdc++.h>
using namespace std;

int f(int n){
if(n==1)return 1;
return f(n-1)*n;
}
int main(){
cout<<f(3);
return 0;
}

