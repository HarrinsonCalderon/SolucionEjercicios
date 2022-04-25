#include<bits/stdc++.h>
using namespace std;

#define MAX_N 1000010

bool ban;
int mayor;
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
      ban=1;
      j = b[j];
}
//mayor=max(mayor,j);
//cout<<"> <"<<mayor<<"\n";
}
//cout<<i<<" "<<j<<"\n";
mayor=j;
}

int main() {
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
while(cin>>T){
ban=0;
mayor=0;
reverse(T.begin(),T.end());
P=T;
reverse(T.begin(),T.end());
n=T.length();
m=P.length();
kmpPre();
kmp();
if(!ban){
    for(int i=mayor;i<P.length();i++){
        T+=P[i];
    }
}
cout<<T<<"\n";
}
  return 0;
}


