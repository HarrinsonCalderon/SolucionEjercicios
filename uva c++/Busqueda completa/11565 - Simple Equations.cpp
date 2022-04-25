#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);cin.tie(0);
int n,A,B,C;
bool ban;
cin>>n;
while(n--){
    ban=0;
    cin>>A>>B>>C;
    for(int x=-100;x<=100;x++){
        for(int y=-100;y<=100;y++){
            for(int z=-100;z<=100;z++){
                if(x!=y && z!=x && z!=y && x+y+z==A && x*y*z==B && x*x+y*y+z*z==C){
                   if(!ban){
                    cout<<x<<" "<<y<<" "<<z<<"\n";

                    }
                    ban=1;
                }
            }
        }
    }
    if(!ban)cout<<"No solution.\n";
}
return 0;
}
