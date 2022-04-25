#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
 return a>b;
}

int main(){
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,m;
cin>>n;
while(n--){
    vector<int>l;
    while(cin>>m && m!=0){

        l.push_back(m);
    }
    sort(l.begin(),l.end(),cmp);

    double acu;
    double rta=0.0;
    for(int i=0;i<l.size();i++){
        if(rta<=INT_MAX){
          acu=2*pow(l[i],(i+1));
          rta+=acu;
        }

    }

    if(rta>5000000){
         cout<<"Too expensive\n";
    }else{
        cout<<(int)rta<<"\n";
    }
}
}


