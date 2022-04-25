#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int c,n,aux;
double acu;
cin>>c;
for(int i=1;i<=c;i++){
    cin>>n;
    int v[n];
    for(int j=0;j<n;j++){
        cin>>v[j];
    }
    int pos=n/2;
    cout<<"Case "<<i<<": "<<v[pos]<<"\n";
}
return 0;
}
