
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

vector<int>l;

int n;
while(cin>>n){
    l.push_back(n);
    sort(l.begin(),l.end());
    if(l.size()%2!=0){
        cout<<l[l.size()/2];
    }else{

        cout<<(l[l.size()/2]+l[(l.size()/2)-1])/2;
    }
    cout<<"\n";
}
}
///10107
