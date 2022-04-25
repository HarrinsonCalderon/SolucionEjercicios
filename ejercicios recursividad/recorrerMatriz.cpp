#include<bits/stdc++.h>
using namespace std;
const int n=2;

void recorrer(int m[n][n],int i,int j){
 if(j==n && i<n){
    j=0;
    i++;
    cout<<"\n";
 }
 if(i!=n){
  cout<<m[i][j]<<" ";
  j++;
  recorrer(m,i,j);
 }


}

int main(){
int m[2][2]={{1,2},{3,4}};
recorrer(m,0,0);
return 0;
}



