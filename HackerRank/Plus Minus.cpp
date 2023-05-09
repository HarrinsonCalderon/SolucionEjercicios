#include<bits/stdc++.h>
using namespace std;

int main(){

int n,x,ca,cb,cc,f;
ca=cb=cc=0;
cin>>n;
f=n;
while(n--){
    cin>>x;
    if(x>0){
        ca++;
    }else if(x<0){
        cb++;
    }else if(x==0){
        cc++;
    }
}
cout<<fixed<<setprecision(5)<<(double)ca/f<<"\n";
cout<<fixed<<setprecision(5)<<(double)cb/f<<"\n";
cout<<fixed<<setprecision(5)<<(double)cc/f<<"\n";
return 0;
}


//-6
//--4 3 -9 0 4 1
