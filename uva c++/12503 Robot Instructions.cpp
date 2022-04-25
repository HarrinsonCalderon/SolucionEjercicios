    #include<bits/stdc++.h>
using namespace std;

int main(){
 //freopen ("in.txt","r",stdin);
 //freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
 int n,m;
cin>>n;
while(n--){
    cin>>m;
    string cad,aux;;
   int v[m];
    int con=0;
    for(int i=0;i<m;i++){
       cin>>cad;

        if(cad[0]=='L'){
            con--;
            v[i]=-1;
        }else if(cad[0]=='R'){
            con++;
               v[i]=1;
        }else{
            int pos;
            cin>>aux;
            cin>>pos;
            pos--;
            v[i]=v[pos];
            con+=v[pos];
        }

    }

    cout<<con<<"\n";
}
}

