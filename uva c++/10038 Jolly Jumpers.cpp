#include<bits/stdc++.h>
using namespace std;

int main(){
 //freopen("in.txt", "r", stdin);
 //freopen("out.txt", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

 int n,a;
 while(cin>>n){
 vector<int>v(n);
 vector<int>r(n);
 map<int,bool>m;
 for(int i=0;i<n;i++){
     cin>>v[i];
 }
 for(int i=0;i<n-1;i++){
    r[i]=fabs(v[i]-v[i+1]);
    m[r[i]]=true;

 }

sort(v.begin(),v.end());
 bool ban=1;
  for(int i=1;i<=n-1 && ban;i++){
    if(!m[i]){
        ban=0;
    }
 }
 if(ban){
    cout<<"Jolly\n";
 }else{
    cout<<"Not jolly\n";
 }
 }
}


