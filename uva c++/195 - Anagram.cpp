#include<bits/stdc++.h>
using namespace std;
 bool cmp(char a,char b){
    if(tolower(a)==tolower(b)){
        return a<b;
    }
   return tolower(a)<tolower(b);

 }
int main(){
//freopen ('in.txt','r',stdin);
//freopen('out.txt','w',stdout);
 ios_base::sync_with_stdio(0);
 cin.tie(0);
int n;
char cad[1000];
cin>>n;
while(n--){
 cin.ignore();
 cin>>cad;
 sort(cad,cad+strlen(cad),cmp);

 do{
    cout<<cad<<"\n";
 }while(next_permutation(cad,cad+strlen(cad),cmp));

}

}


