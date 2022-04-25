    #include<bits/stdc++.h>
    using namespace std;
    #define NN 1009
    int peso[NN]={0},valor[NN]={0}; //MAX
    int memo[NN][NN]; //MAX o dentro de mochila
    void mochila(int canArticulos,int maxPeso){ //BOTTOM-UP
        peso[NN]={0},valor[NN]={0};
        memo[NN][NN];
        for(int i=0;i<=canArticulos;i++){
            for(int j=0;j<=maxPeso;j++){
                if(i==0 ||j==0)memo[i][j]=0; //para que no de errores de memoria
                else if(peso[i-1]<=j){
                  memo[i][j]=max(memo[i-1][j],valor[i-1]+memo[i-1][j-peso[i-1]]); //me puedo llevar el anterior O el valor actual mas el valor que me resta de la fila anterior
                }else  {
                  memo[i][j]=memo[i-1][j];
                }
            }
        }
    }
    int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int can,maxxp,p,v;
    while(cin>>can && can!=0){
        for(int i=0;i<can;i++){
        cin>>v>>p;
        peso[i]=p;
        valor[i]=v;
        }
        cin>>maxxp;
       mochila(can,maxxp);
       cout<<memo[can][maxxp]<<"\n";

    }

    return 0;
    }

