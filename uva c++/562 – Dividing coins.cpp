#include<bits/stdc++.h>
using namespace std;
int const MAX=202;
int peso[MAX],valor[MAX];
int memo[MAX][MAX*200];
int mochila(int canArticulos,int maxPeso){
    for(int i=0;i<=canArticulos;i++){
        for(int j=0;j<=maxPeso;j++){
             if(!i || !j){
               memo[i][j] = 0;
             }else
             if(valor[i-1]<=j){
                memo[i][j]=max(memo[i-1][j],valor[i-1]+memo[i-1][j-valor[i-1]]);
            }else{
                memo[i][j]=memo[i-1][j];
            }
        }
}
return memo[canArticulos][maxPeso];
}

int main(){
/*
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
*/
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,maxw=0,rta,ca;
cin>>ca;
while(ca--){
cin>>n;
for(int i=0;i<n;i++){
    cin>>valor[i];
    maxw+=valor[i];
}
rta=mochila(n,maxw/2);
cout<<maxw-2*rta<<"\n";
maxw=0;
}
return 0;
}


