    #include<bits/stdc++.h>
    using namespace std;
    int const MAX=1e5+3;
    int v[MAX],n;
    bool va(int k){
        int d;
        for(int i=0;i<n;i++){
            if(!i)
                d=v[i];
            else
            d=v[i]-v[i-1];
            if(d==k)
                k--;
            else if(d>k)
                return false;
        }
        return true;
    }

    int bina(){
    int h=10000002,l=1,m;
    while(h-l>1){
        m=(h+l)/2;
        if(va(m)){
            h=m;
        }else{
            l=m;
        }
    }
    return h;
    }
    int main(){
    /*
      freopen("in.txt", "r", stdin);
      freopen("out.txt", "w", stdout);
    */
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int it=0,con=0,ca;
    cin>>ca;
    for(int i=1;i<=ca;i++){
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>v[i];
    if(n==1 && v[i]==1){
         cout<<"Case "<<i<<": "<<1<<"\n";
    }else{
    cout<<"Case "<<i<<": "<<bina()<<"\n";
    }
    }
    }
    return 0;
    }


