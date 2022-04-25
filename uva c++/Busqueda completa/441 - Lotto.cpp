#include<bits/stdc++.h>
using namespace std;

int main(){
int n,con=0;
ios_base::sync_with_stdio(0);
cin.tie(0);
while(cin>>n && n){
if(con>0){
cout<<"\n";
}
int v[n];
for(int i=0;i<n;i++){
    cin>>v[i];
}
for(int a=0;a<n-5;a++){
    for(int  b=a+1;b<n-4;b++){
        for(int c=b+1;c<n-3;c++){
            for(int d=c+1;d<n-2;d++){
                for(int e=d+1;e<n-1;e++){
                    for(int f=e+1;f<n;f++){
                        cout<<v[a]<<" "<<v[b]<<" "<<v[c]<<" "<<v[d]<<" "<<v[e]<<" "<<v[f]<<"\n";
                    }
                }
            }
        }
    }
}
con++;
}
return 0;
}
