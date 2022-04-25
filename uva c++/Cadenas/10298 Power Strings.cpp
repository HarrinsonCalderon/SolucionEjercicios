#include<bits/stdc++.h>
using namespace std;

#define MAX_N 1000010


string T, P; // T = text, P = pattern
int b[MAX_N], n, m; // b = back table, n = length of T, m = length of P
int con=0;

void kmpPre() {
  int i = 0, j = -1; b[0] = -1;
  while (i < m) {
    while (j >= 0 && P[i] != P[j]) j = b[j];
    i++; j++;
    b[i] = j;
}
}
void kmp() {
  int i = 0, j = 0;
  while (i < n) {
    while (j >= 0 && T[i] != P[j]) j = b[j];
    i++; j++;
    if (j == m) {
     //cout<<"P se encontro en la posicion "<<i - j<<"\n";
        con++;
      j = b[j];
} }

}

int main() {
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

string cad;
while(cin>>cad && cad!="."){
bool ban=true;
for(int i=1;i<cad.length() && ban;i++){
    if(cad[0]!=cad[i]){
        ban=false;
    }
}
if(ban){
    cout<<cad.length()<<"\n";
}else{
string aux=cad+cad;
con=0;
T=aux;
P=cad;
n=T.length();
m=P.length();
kmpPre();
kmp();
cout<<con-1<<"\n";
}

}
  return 0;
}


