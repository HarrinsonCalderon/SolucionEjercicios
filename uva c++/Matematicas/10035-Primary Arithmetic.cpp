#include<bits/stdc++.h>
using namespace std;
int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int a,b;
int acarreo,sum,con;
while(cin>>a>>b && a || b){
    acarreo=sum=con=0;
    while(a>0 || b>0){
        sum=acarreo+(a%10)+(b%10);
        if(sum>=10){
            con++;
        }
        acarreo=sum/10;
        a/=10;
        b/=10;
    }
    if (con==0) {
        cout<<"No carry operation.\n";
	} else if (con==1) {
	    cout<<"1 carry operation.\n";
	} else {
            cout<<con<< " carry operations.\n";
        }
    }
    return 0;
}



