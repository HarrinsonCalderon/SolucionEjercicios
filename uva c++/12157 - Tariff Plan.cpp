#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int c,n,j,m,a,it=1;
cin>>c;
while(c--){
    cin>>n;
    m=j=0;
    for(int i=0;i<n;i++){
        cin>>a;
        m+=(1+(a/30))*10;
        j+=(1+(a/60))*15;
    }
    if(m<j){
        cout<<"Case "<<it<<": "<<"Mile "<<m<<"\n";
    }else if(j<m){
        cout<<"Case "<<it<<": "<<"Juice "<<j<<"\n";
    }else{
        cout<<"Case "<<it<<": "<<"Mile Juice " <<m<<"\n";
    }
    it++;
}

return 0;
}
