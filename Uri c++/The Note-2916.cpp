 #include<bits/stdc++.h>
#define M 1000000007
using namespace std;
int v[1000009];
int main(){
int a,b,c;

while(cin>>a>>b){
int it=a-b;
for(int i=0;i<a;i++){
    cin>>v[i];
}
sort(v,v+a);
int sa=0;
for(int i=it;i<a;i++){
    sa=(sa+v[i])%M;
}
cout<<sa<<"\n";
}

return 0;
}

