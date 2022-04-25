#include<bits/stdc++.h>
using namespace std;
int con=0,rta=1;
int m(int b,int e){
    if(e==0){
        return 1;
    }
    if(con==e){
      return rta;
    }else{
      rta*=b;
    con++;
        m(b,e);
    }
}
int main(){
cout<<m(3,3);
return 0;
}

