#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>l={3,2,8,9};
vector<int>h(l.size()+1,0);
int t=8;


for(int i=0;i<l.size();i++){
     sort(h.begin(),h.end());
     int n=lower_bound(l.begin(), l.end(), l[i])-l.begin();
     cout<<n<<endl;
}


return 0;
}

