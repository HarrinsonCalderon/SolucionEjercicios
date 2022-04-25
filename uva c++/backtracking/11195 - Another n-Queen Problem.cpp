#include<bits/stdc++.h>
using namespace std;
bool  rw[30],ld[30],rd[30];
int rta=0;
int const n=16;
string board[n][n];

void backtrack(int c){
    if(c==n){
    rta++;
    return;
    }
    for(int i=0;i<n;i++){
        if(board[i][c]!="*" && !rw[i] && !ld[i-c+n-1] && !rd[i+c])
            rw[i]=ld[i-c+n-1]=rd[i+c]=true;
        backtrack(c+1);
        rw[i]=ld[i-c+n-1]=rd[i+c]=false;
    }
    cout<<"si\n";
}
int main(){
int N;
string cad;
cin>>N;
for(int i=0;i<N;i++){
    cin>>cad;
    for(int j=0;j<N;j++){
       board[i][j]=cad[j];
    }
}
memset(rw,0,sizeof(rw));
memset(ld,0,sizeof(ld));
memset(rd,0,sizeof(rd));
backtrack(0);
cout<<rta<<"\n";
return 0;
}
//ARREGLAR
