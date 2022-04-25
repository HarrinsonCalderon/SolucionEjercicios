#include<bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);

vector<int>l;
int n;
while(cin>>n && n){
    l.push_back(n);
}
cout<<"PERFECTION OUTPUT\n";
for(int i=0;i<l.size();i++){
    int x=l[i],con=0;
    x-=1;
    while(x-- && x>0){
        if(l[i]%x==0){
            con+=x;
        }
    }
    int lon=log10(l[i])+1;
    lon=5-lon;
    for(int i=1;i<=lon;i++)cout<<" ";
    cout<<l[i]<<"  ";
    if(con==l[i]){
        cout<<"PERFECT\n";
    }else if(con<l[i]){
        cout<<"DEFICIENT\n";
    }else{
        cout<<"ABUNDANT\n";
    }

}  cout<<"END OF OUTPUT\n";
return 0;
}


