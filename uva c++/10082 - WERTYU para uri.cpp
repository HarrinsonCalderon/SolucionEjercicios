#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
string a = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
char b;

while(cin.get(b)){
    for(int i=0;i<a.length();i++){
        if(b==a[i]){
        cout<<a[i-1];
        break;
        }else if(b==' '){
        cout<<" ";
        break;
        }else if(b=='\n'){
        cout<<"\n";
        break;
        }


    }
}


	return 0;
}
