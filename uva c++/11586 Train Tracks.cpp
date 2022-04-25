#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
cin.ignore();
string cad;
while(n--){
    getline(cin,cad);
    int m=0,f=0;
    for(int i=0;i<cad.length();i++){
        if(cad[i]=='M'){
            m++;
        }else if(cad[i]=='F'){
            f++;
        }
    }
    if(m==f && m>1 && f>1){
        cout<<"LOOP\n";
    }else{
        cout<<"NO LOOP\n";
    }
}

}


