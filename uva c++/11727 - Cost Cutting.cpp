#include<bits/stdc++.h>
using namespace std;

int main(){
int a;
cin>>a;
for(int j=1;j<=a;j++){
    int v[3];
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    sort(v,v+3);

    cout<<"Case "<<j<<": "<<v[1]<<"\n";
}

return 0;
}
