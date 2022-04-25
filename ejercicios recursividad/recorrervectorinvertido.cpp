#include<bits/stdc++.h>
using namespace std;

void iter(int v[],int lon){
    if(lon<1)cout<<"ok \n";
    else{
        lon--;
    cout<<v[lon]<<" ";
    iter(v,lon);
    }

}
int main(){
int v[]={1,2,3,4,5};
iter(v,5);
return 0;
}
