#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,m;

cin>>m;
while(m--){
bool ban=true,ban2=true ;
cin>>n;
int m[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>m[i][j];
    }
}
map<int,int>m1,m2,m3;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        m1[m[i][j]];
        m2[m[j][i]];
    }
    if(m1.size()!=n ||m2.size()!=n ){
        ban=false;
        break;
    }

    m1.clear();
    m2.clear();
}
int r=(int)sqrt(n);
int con=0;
for(int i=0;i<n;i+=r){
    for(int j=0;j<n;j+=r){

            for(int ii=i;ii<r+i;ii++){
            for(int jj=j;jj<r+j;jj++){
                    //cout<<m[ii][jj]<<" ";
                    m3[m[ii][jj]];
                }
           //cout<<"r+i"<<r+i<<"\n";
           // cout<<"\n";

            }
            //cout<<"\n";
            //cout<<m3.size()<<"\n";
            if(m3.size()!=n){

                ban=false;
                break;
            }

            m3.clear();

            }

    }


if(ban && ban2)cout<<"yes\n";
else cout<<"no\n";
ban=ban2=false;
}
return 0;
}

