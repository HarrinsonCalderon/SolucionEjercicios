#include<bits/stdc++.h>
using namespace std;
void m(string cad,int i){
    if(i>=0){
        cout<<cad[i];
        i--;
        m(cad,i);
    }
}
int main(){
string cad="12345";
m(cad,cad.length()-1);
return 0;
}
