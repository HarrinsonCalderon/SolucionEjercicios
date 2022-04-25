#include<bits/stdc++.h>
using namespace std;

int main(){
//freopen ("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int a,b;
string aux;
int it=0;
while(cin>>a>>b && a && b){

string m1[a][b];
int m2[a][b];
memset(m2,0,sizeof(m2));
for(int i=0;i<a;i++){
    cin>>aux;
    for(int j=0;j<b;j++){
      m1[i][j]=aux[j];
    }
}
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
     if(m1[i][j]=="*"){
            m2[i][j]=-1;
        if(i-1>=0 && m2[i-1][j]!='*'){
            m2[i-1][j]++;
        }
        if(i-1>=0 && j+1<b && m2[i-1][j+1]!='*'){
            m2[i-1][j+1]++;
        }
        if(j+1<b && m2[i][j+1]!='*'){
            m2[i][j+1]++;
        }
        if(i+1<a && j+1<b && m2[i+1][j+1]!='*'){
            m2[i+1][j+1]++;
        }
        if(i+1<a && m2[i+1][j]!='*'){
            m2[i+1][j]++;
        }
        if(i+1<a && j-1>=0 && m2[i+1][j-1]!='*'){
            m2[i+1][j-1]++;
        }
        if(j-1>=0 && m2[i][j-1]!='*'){
            m2[i][j-1]++;
        }
        if(i-1>=0 && j-1>=0 && m2[i-1][j-1]!='*'){
            m2[i-1][j-1]++;
        }
     }
    }
}
if(it){
    cout<<"\n";
}
cout<<"Field #"<<it+1<<":\n";
it++;
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){

       if(m1[i][j]=="*")cout<<"*";
        else cout<<m2[i][j];
    }
    cout<<"\n";
}
}
return 0;
}



