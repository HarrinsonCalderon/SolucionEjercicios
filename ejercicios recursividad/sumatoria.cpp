#include<bits/stdc++.h>
using namespace std;
int suma(int n){
if(n==1)return n;
return n+suma(n-1);
}
int main(){
cout<<suma(5);
return 0;
}
