    #include<bits/stdc++.h>
using namespace std;

int main(){
 //freopen ("in.txt","r",stdin);
 //freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
   bool ban=1,ban2=0;
int persona,monto,chotel,sema;
while(cin>>persona>>monto>>chotel>>sema){
    int mi=2000000,salida;
    for(int x=0;x<chotel;x++){
     ban=1;ban2=0;
    int prenoche,camas;

        cin>>prenoche;
        if(prenoche*persona>monto){
                ban=0;
            }
        for(int j=0;j<sema;j++){
            cin>>camas;
            if(camas>=persona){
                ban2=1;
            }

        }
        if(ban && ban2){
            if(persona*prenoche<mi){
                mi=prenoche*persona;
            }
        }

    }
    if(mi!=2000000){
        cout<<mi<<"\n";
    }else{
        cout<<"stay home\n";
    }
    ban=1;
    ban2=0;
}
}

