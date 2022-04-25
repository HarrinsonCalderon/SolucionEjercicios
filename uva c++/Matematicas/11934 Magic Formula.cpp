
#include<bits/stdc++.h>
using namespace std;
int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int a,b,c,x1,x2,d,l,con=0;
while(cin>>a>>b>>c>>d>>l  ){
    if(!a&&!b&&!c&&!d&&!l)break;
for(int i=0;i<=l;i++){
    if((a*(i*i)+(b*i)+c)%d==0){
        con++;
    }
}
cout<<con<<"\n";
con=0;
}
return 0;
}



