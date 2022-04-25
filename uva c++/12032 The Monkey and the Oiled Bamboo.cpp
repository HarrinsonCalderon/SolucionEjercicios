#include<bits/stdc++.h>
using namespace std;
bool val(int n,vector<int>l){
   int k=n;
   for(int i=0;i<l.size();i++){
     if(!i){
        if(l[i]>k){
            return 0;
        }else if(l[i]==k){
            k--;
        }
     }else{
        if(l[i]-l[i-1]>k){
            return 0;
        }else if(l[i]-l[i-1]==k){
            k--;
        }
     }
   }
   return k>=0;
}
int bs(vector<int>v){
    int h=10000000,l=0,m;
   while(h-l>1){
    m=(h+l)/2;
    if(val(m,v)){
        h=m;
    }else{
        l=m;
    }
    // cout<<h<<" "<<l<<" "<<m<<"\n";
 }
 //cout<<h<<" "<<l<<"\n";
return h;
}

int main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,ca;
int maz=0;
cin>>ca;
for(int x=1;x<=ca;x++){
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    //maz=max(v[i],maz);
}
cout<<"Case "<<x<<": "<<bs(v)<<"\n";
}

return 0;
}


