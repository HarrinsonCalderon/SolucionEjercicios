#include<bits/stdc++.h>
using namespace std;

int main(){
int n;

string cad;
cin>>n;
while(n--){
    cin>>cad;
    if(cad=="0"){
        cout<<"1\n";
    }else if(cad=="1"){
        cout<<"66\n";
    }else{
        int v[]={76,16,56,96,36,76,16,56,96,36};
        cout<<v[cad.back()-'0']<<"\n";

          }

}
return 0;

}


