#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
       string num;
       cin>>n;
       cin.ignore();
        for (int i = 0; i < n; i++) {
         cin>>num;
            if ( num[num.length()-1]=='0' or num[num.length()-1]=='5'  ) {

                cout<<"YES\n";
            }else{
            cout<<"NO\n";
            }

        }
return 0;
}








