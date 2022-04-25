    #include<bits/stdc++.h>
    using namespace std;
    char m[120][120];
    int lon=0,f,c,con=0;
    bool val(int a,int b){
    return a>-1 && b>-1 && a<lon && b<lon;
    }
    void metodo(int i,int j){
    if(val(i,j) && m[i][j]=='W'){
     con++;
     metodo(i-1,j);
     metodo(i-1,j+1);
     metodo(i,j+1);
     metodo(i+1,j+1);
     metodo(i+1,j);
     metodo(i+1,j-1);
     metodo(i-1,j);
     metodo(i-1,j-1);
    }
    }
    int main(){
    string cad;
    int it=0,a,b;
    cin>>cad;
    lon=cad.length();
    while(true){
        if(cad[0]=='L' || cad[0]=='W'){
            for(int i=0;i<cad.length();i++){
             m[it][i]=cad[i];
            }
            it++;
        }else{
            stringstream s;
            s<<cad[0];
            s>>a;
            cin>>b;
            break;
        }
        cin>>cad;
    }
     metodo(2,1);
    cout<<con<<"\n";
    //invocar
    //luego seguir leyendo
    while(true){
        cin>>a>>b;
        metodo(a-1,b-1);
        cout<<con<<"\n";
    }
    return 0;
    }
