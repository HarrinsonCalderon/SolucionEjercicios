#include<bits/stdc++.h>
using namespace std;
int it=0;
int iter(int v[],int lon,int n,int it){
  if(it==lon){
   return -1;
  }else
  if(v[it]==n){
    return 1;
  }else{
    it++;
  iter(v,lon,n,it);
  }


}
int main(){
int v[]={1,2,3,4,5};
cout<<iter(v,5,3,0)<<"\n";
return 0;
}


