#include<bits/stdc++.h>
using namespace std;
const int M=1e7;
vector<int>primo;
bool isprimo[M];
void sieve(){
 isprimo[0]=isprimo[1]=1;
 for(int i=2;i<M;i++){
    if(!isprimo[i]){
        primo.push_back(i);
        for(long long j=1ll*i*i;j<M;j+=i){
                isprimo[j]=1;
        }
    }
 }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);
sieve();
int n;
while(cin>>n && n){
int sum,con;
con=0;
for(int i=0;i<=n;i++){
        sum=0;
 for(int j=i;j<=n;j++){

    if(sum+primo[j]<=n){
        sum+=primo[j];
    }
    if(sum==n){
        con++;
        break;
    }
    if(sum+primo[j]>n){
        break;
    }
 }
}
cout<<con<<"\n";
}
return 0;
}


