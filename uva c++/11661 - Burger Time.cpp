    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    string cad="",aux="";
    int n,con=0,mi=9999999999,mi2=9999999999;


    while(cin>>n){
        if(n==0){
            break;
        }

    cin.ignore();
    getline(cin,cad);
if((int)cad.find("Z")>=0){
    cout<<"0\n";
}else{

    for(int i=0;i<cad.length();i++){
            con=0;
            aux=cad[i];
           if(aux=="R"){
                for(int j=i+1;j<cad.length();j++){
                    con++;
                    aux=cad[j];
                   if(aux=="D"){
                    mi=min(con,mi);
                    break;
                   }else if(aux=="R"){
                    break;
                   }
                }

            }
    }
      for(int i=0;i<cad.length();i++){
           con=0;
            aux=cad[i];
           if(aux=="D"){
                for(int j=i+1;j<cad.length();j++){
                    con++;
                    aux=cad[j];
                   if(aux=="R"){
                    mi2=min(con,mi2);
                    break;
                   }else if(aux=="D"){
                    break;
                   }
                }

            }
    }
    cout<<min(mi,mi2)<<"\n";

     mi=9999999999;
    mi2=9999999999;
    }


    }
    return 0;
    }
