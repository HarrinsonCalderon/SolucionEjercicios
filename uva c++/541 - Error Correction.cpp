#include<bits/stdc++.h>
struct cla{
int con=0;
int foc=0;
}sa1,sa2;
using namespace std;
int main(){
int n,a,b,q;
cin>>n;
while(n!=0){
    int m[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>q;
            m[i][j]=q;
        }
    }
    for(int i=0;i<n;i++){
     a=0;
        for(int j=0;j<n;j++){

        a+=m[i][j];
        }

        if(a%2!=0){
        sa1.con++;
        sa1.foc=i;
        }
    }

    int aux,aux2;
    a=0;

        for(int i=0;i<n;i++){
        a=0;
        for(int j=0;j<n;j++){

        a+=m[j][i]; //sumar columnas
            aux=i;
        }

        if(a%2!=0){

        sa2.con++;
        sa2.foc=aux;

        }
    }

    if(sa1.con==0 && sa2.con==0){
        cout<<"OK\n";
    }else if(sa1.con==1 && sa2.con==1){
        cout<<"Change bit ("<<sa1.foc+1<<","<<sa2.foc+1<<")\n";

    }else{
    cout<<"Corrupt\n";
    }
    cin>>n;
    sa1.con=0;
    sa1.foc=0;
    sa2.con=0;
    sa1.foc=0;
}

return 0;
}
