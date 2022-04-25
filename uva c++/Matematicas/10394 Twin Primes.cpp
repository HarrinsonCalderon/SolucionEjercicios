#include<bits/stdc++.h>
using namespace std;
const int M=20000005;
vector<int>primo;
bool mark[M];
void sieve(){
    mark[0]=mark[1]=1;
    for(int i=2;i<M;i++){
        if(!mark[i]){
            primo.push_back(i);
            for(long long j=1ll*i*i;j<M;j+=i){
                mark[j]=1;
            }
        }
    }

}
typedef long long int  ll;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);
sieve();
vector<pair<int,int>>l;
int it=0,j=0;
while(it<primo.size()){
    if(primo[j]+2==primo[j+1]){
        l.push_back({primo[j],primo[j+1]});

    }
        it++;
    j++;
}
int q;
while(cin>>q){
        q--;
    cout<<"("<<l[q].first<<", "<<l[q].second<<")\n";
}

return 0;
}


