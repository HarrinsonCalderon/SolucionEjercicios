
#include<bits/stdc++.h>
using namespace std;
 const int  M=10000,N=1000;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen("out.txt","w",stdout);
string cad;
bool ban=0;
int ca=1;
int arr=21,no;

vector<int>l;
int a,b,it=1;
while(cin>>a){
        if(ban)cout<<"\n";
vector<pair<int,int>>q;
vector<vector<int>>min_dis(arr,vector<int>(arr,M));
   while(a--){
    cin>>b;
    min_dis[it][b]=1;
    min_dis[b][it]=1;
   }
   for(int i=1;i<=18;i++){
       it++;
       cin>>a;
        while(a--){
        cin>>b;
        min_dis[it][b]=1;
        min_dis[b][it]=1;
       }
   }
   q.clear();
   int qq;
   cin>>qq;
   while(qq--){
    cin>>a>>b;
    q.push_back({a,b});
   }
   for(int i=0;i<arr;i++){
    min_dis[i][i]=0;
   }
   int n=arr;
   for(int k=0;k<n;k++){
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(min_dis[i][j]>min_dis[i][k]+min_dis[k][j])
            min_dis[i][j]=min(min_dis[i][j],min_dis[i][k]+min_dis[k][j]);
        }
      }
   }
   cout<<"Test Set #"<<ca++<<"\n";
   for(int i=0;i<q.size();i++){
    if(q[i].first<=9)
     cout<<" "<<q[i].first<<" to ";
    else
     cout<<q[i].first<<" to ";
     if(q[i].second<=9)
     cout<<" "<<q[i].second;
    else
     cout<<q[i].second;
     cout<<": "<<min_dis[q[i].first][q[i].second];
     cout<<"\n";

   }
   it=1;
ban=1;
}
cout<<"\n";


return 0;
}


