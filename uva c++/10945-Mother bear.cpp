#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
string cad,a;
while(getline(cin,cad) && cad!="DONE"){
    a="";
for(int i=0;i<cad.length();i++){
    if(cad[i]>='A' && cad[i]<='Z' || cad[i]>='a' && cad[i]<='z'){
        a+=tolower(cad[i]);
    }
}

bool ban=1;
int l=0,h=a.length()-1;
if(a.length()%2==0){
    while(h>l && ban){
        if(a[l]==a[h]){
            l++;
            h--;
        }else{
            ban=0;
        }
    }
}else{
    while(h-l>1 && ban){
        if(a[l]==a[h]){
            l++;
            h--;
        }else{
            ban=0;
        }
    }
}
(ban)?cout<<"You won't be eaten!":cout<<"Uh oh..";
cout<<"\n";
}
return 0;
}

