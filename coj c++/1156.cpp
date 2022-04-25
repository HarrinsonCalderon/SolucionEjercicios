
#include <iostream>

using namespace std;

int main()
{   int n,c=0;
    int v[10000000];
    while(cin>>n){
        v[c]=n;
        c++;
    }
for(int i=0;i<c;i++){
    if (v[i]==42){
        break;
    }else{
    cout<<v[i]<<"\n";
    }
}
    return 0;
}
