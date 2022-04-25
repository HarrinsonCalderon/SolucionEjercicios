#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
string cad;
cin>>n;
for(int i=0;i<n;i++){
    cin>>cad;
    if(cad=="P=NP"){
        cout<<"skipped\n";
    }else{

        a=atoi(cad[0]+"");
           b=atoi(cad[2]+"");
           cout<<a+b<<"\n";
           cout<<atoi(cad[0]+"")+atoi(cad[2]+"");
    }
}
return 0;
}
