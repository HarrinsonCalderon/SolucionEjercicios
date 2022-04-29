#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
string cad;
cin>>n;
while(n--){
    cin>>cad;
    if(cad.length()>10){
        cout<<cad[0]<<cad.size()-2<<cad[cad.length()-1]<<"\n";
    }else
        cout<<cad<<"\n";

}

return 0;
}
