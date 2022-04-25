#include<bits/stdc++.h>
using namespace std;

string tolower(string cad){
    string a="";
    for(int i=0;i<cad.length();i++){
        a+=tolower(cad[i]);
    }
    return a;
}

bool isprime(int n){

    if(n%2==0 && n!=2) return 0;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("out.txt","w",stdout);

string cad;
while(cin>>cad){

int n=0;
for(int i=0;i<cad.length();i++){
    if(cad[i]>='a' && cad[i]<='z'){
     n+=cad[i]-'a'+1;
    }else{
     n+=cad[i]-'A'+1;
     n+=26;
    }

}

isprime(n)?cout<<"It is a prime word.\n":cout<<"It is not a prime word.\n";
}
return 0;
}


