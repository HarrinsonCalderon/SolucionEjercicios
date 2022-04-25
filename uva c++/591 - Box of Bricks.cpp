
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,acu=0,rta=0,it=1;
cin>>n;
while(n!=0){
int v[n];
for(int i=0;i<n;i++){
    cin>>v[i];
    acu+=v[i];
}
int repartir=acu/n;
for(int i=0;i<n;i++){
    rta+=max(v[i],repartir)-min(v[i],repartir);
}
cout<<"Set #"<<it<<"\n";
cout<<"The minimum number of moves is "<<rta/2<<".\n\n";
rta=0;
acu=0;
it++;
cin>>n;
}
}
