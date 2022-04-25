#include<bits/stdc++.h>
using namespace std;

vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}


int main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int ca,ban=0;
string cad;
cin>>ca;
while(ca--){
if(ban)cout<<"\n";
ban=1;
cin.ignore();
cin>>cad;
int n=cad.length();
int rta=0;
vector<int>pos=z_function(cad);
for(int i=1;i<=pos.size()&& !rta;i++){
 if(n%i==0){
 if(pos[i]+i==n){
    rta=i;
 }
 }
}
if(rta==0)
cout<<cad.length()<<"\n";
else
cout<<rta<<"\n";

}
return 0;
}

