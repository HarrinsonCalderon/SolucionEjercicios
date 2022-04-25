#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    double a, b, c,aux,mes,v[110];
    int d, m,it,it2;

    while(cin>>a>>b>>c>>d )
    {
        if (a<0)break;
        aux=c;
          mes=c/(double) a;
            c+=b;
         memset(v,-1,sizeof(v));
         for(int i=0;i<=a;i++){
         v[i]=-1;
         }
        for(int i=0;i<d;i++)
        {
            cin>>m;
            cin>>v[m];
        }
        for(int i=1;i<=a;i++){
            if(v[i]==-1)
            v[i]=v[i-1];
        }
          it=-1;
          it2=0;
        while(it==-1)
        {
            c=c-c*v[it2];
            if(c>aux)
            it=it2;
            aux-=mes;
            it2++;

        }
        if(it==0 ||it>1)cout<<it<<" months\n";
        else cout<<it<<" month\n";

    }
return 0;
}
