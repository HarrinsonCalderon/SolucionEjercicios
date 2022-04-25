#include<bits/stdc++.h>
using namespace std;
int it=0;
void iter(int v[],int lon,int n){
  if(it<=lon && v[it]==n){
    cout<<"esta\n";
  }
  if(it>lon){
    cout<<"NO esta\n";
  }
  it++;
  iter(v,lon,n);
}
int main(){
int v[]={1,2,3,4,5};
iter(v,5,3);
return 0;
}

