#include<bits/stdc++.h>
using namespace std;


int main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

string a,b;
while(getline(cin,a) && getline(cin,b)){
sort(a.begin(),a.end());
sort(b.begin(),b.end());
int i,j;
i=j=0;
while(i<a.length() && j<b.length()){
    if(a[i]==b[j]){
        cout<<a[i];
        i++;j++;
    }else{
        if(a[i]>b[j]){
            j++;
        }else if(b[j]>a[i]){
            i++;
        }
    }
}
cout<<"\n";
}
return 0;
}




