#include<bits/stdc++.h>
using namespace std;
int main(){
int c;
int x1,y1,x2,y2,mx,my;
//cin>>c;
//for(int i=0;i<c;i++){
    cin>>x1>>y1>>x2>>y2;
   mx=fabs(x1-x2);
    my=fabs(y1-y2);
    cout<<(x2-x1)+(y2-y1)<<"\n";
//}
return 0;

}
