#include<bits/stdc++.h>
using namespace std;


int main(){
int n;
cin>>n;
cin.ignore();
string cad;
while(n--){
getline(cin,cad);
int m=0;
int pos[26]={0};
for(int i=0;i<cad.length();i++){
    if(cad[i]>='a' && cad[i]<='z'){
        pos[cad[i]-'a']++;
        m=max(m,pos[cad[i]-'a']);
    }else if(cad[i]>='A' && cad[i]<='Z'){
        pos[cad[i]-'A']++;
        m=max(m,pos[cad[i]-'A']);
    }
}

for(int i=0;i<26;i++){
    if(pos[i]==m){
        cout<<char('a'+i);
    }
}
cout<<"\n";
}
return 0;

}

