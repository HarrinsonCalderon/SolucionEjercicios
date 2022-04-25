#include<bits/stdc++.h>
using namespace std;

int main(){
/*
 freopen("in.txt", "r", stdin);
 freopen("out.txt", "w", stdout);
*/
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,a,b;
bool b1,b2,b3;
while(cin>>n){
stack<int> p;
queue<int> c;
priority_queue<int> cp;
b1=b2=b3=1;
for(int i=0;i<n;i++){
    cin>>a>>b;
    if(a==1){
     p.push(b);
     c.push(b);
     cp.push(b);
    }else{
     if(p.empty() || p.top()!=b){
        b1=0;
     }else{
        p.pop();
     }
     if(c.empty() || c.front()!=b){
        b2=0;
     }else{
        c.pop();
     }
     if(cp.empty() || cp.top()!=b){
        b3=0;
     }else{
        cp.pop();
     }
    }
}
//cout<<b1<<" "<<b2<<" "<<b3<<"\n";

    if(b1 && !b2 && !b3)
        cout<<"stack\n";
    else if(!b1 && b2 && !b3)
        cout<<"queue\n";
    else if(!b1 && !b2 && b3)
        cout<<"priority queue\n";
    else if(!b1 && !b2 && !b3)
        cout<<"impossible\n";
    else cout<<"not sure\n";
    }
return 0;
}

