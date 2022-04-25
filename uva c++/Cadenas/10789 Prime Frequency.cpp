#include<bits/stdc++.h>
using namespace std;
int MAX = 1000010, lim = sqrt(1000010)+1;
bool primo[1000020];
vector<int> p;//lista de primos

void criba(){
    memset(primo, true, sizeof(primo));
    primo[0] = primo[1] = false;

    for(int i = 2; i < MAX; i++){
        if(!primo[i]) continue;
        p.push_back(i);
        if(i > lim) continue;

        for(int j = i*i; j < MAX; j += i)
            primo[j] = false;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
criba();
string cad;
int it=1;
while(n--){

    map<char,int>m;
    cin>>cad;
    for(int i=0;i<cad.length();i++){
        if(isalpha(cad[i]) || isdigit(cad[i])){
            m[cad[i]]++;
        }
    }
    string rta="";

    for(auto i:m){
        if(primo[i.second]){
            rta+=i.first;
        }
    }
    cout<<"Case "<<it<<": ";
    if(rta!=""){
     sort(rta.begin(),rta.end());

    }else cout<<"empty";
    cout<<rta<<"\n";
it++;
}
return 0;

}

