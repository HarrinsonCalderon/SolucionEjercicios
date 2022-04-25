#include<bits/stdc++.h>
using namespace std;


int main(){
int n;
map<int,int>m;
vector<int>l;
while(cin>>n){
    m[n]++;
    if(m[n]==1){
        l.push_back(n);
    }
}
for(auto it:l){
    cout<<it<<" "<<m[it]<<"\n";
}
return 0;
}


