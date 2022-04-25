
#include<bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
deque<int>p;
while(cin>>n && n){
for(int i=1;i<=n;i++){
    p.push_back(i);
}
cout<<"Discarded cards:";
int it=0;
while(p.size()>=2){
    if(!it)cout<<" "<<p.front();
    else cout<<", "<<p.front();
    p.pop_front();
    p.push_back(p.front());
    p.pop_front();
it++;
}
cout<<"\nRemaining card: ";
if(p.size()!=0){
    while(!p.empty()){
        cout<<p.front();
        p.pop_front();
    }
}
cout<<"\n";
}
    return 0;
}
