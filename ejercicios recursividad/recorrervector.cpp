#include<bits/stdc++.h>
using namespace std;
int it=0,it2=0;
void iter(int v[],int lon){
if(it==lon)cout<<" ok";
else{
cout<<v[it++]<<" ";
//it++;
iter(v,lon);
}
}

int main(){
int v[]={1,2,3,4,5};
iter(v,5);

return 0;
}

