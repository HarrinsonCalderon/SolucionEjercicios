#include<bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);


int n;
cin>>n;
int x;
while(n--){
    cin>>x;
    int v[10]={0};
    for(int i=1;i<=x;i++){
        int q=i;
        while(q){
            v[q%10]++;
            q/=10;
        }
    }

    for(int i=0;i<=9;i++){
        if(i)cout<<" ";
        cout<<v[i];
    }
    cout<<"\n";

}
return 0;
}


