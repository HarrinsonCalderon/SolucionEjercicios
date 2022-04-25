#include<bits/stdc++.h>
using namespace std;


int main(){
int a,b,c,l=1,h=200,m;

while(cin>>a>>b>>c){

while(h-l>1){
    m=(h+l)/2;
    if(a+m*c>=b){
      h=m;
    }else{
      l=m;
    }

}
 cout<<h<<"\n";
 h=200;
 l=1;
}
return 0;
}

