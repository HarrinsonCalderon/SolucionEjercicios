#include<bits/stdc++.h>
using namespace std;

#define MAX_N 10000010

bool ban;
int mm;
string T, P; // T = text, P = pattern
int b[MAX_N], n, m; // b = back table, n = length of T, m = length of P


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
    mm=max(mm,j);
    if (j == m) {
      j = b[j];
    }
  //cout<<i<<" "<<j<<"\n";
}


}

int main() {
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
int ca;
cin>>ca;
while(ca--){
cin>>T;
P=T;
reverse(T.begin(),T.end());
n=T.length();
m=P.length();
mm=-1;
kmpPre();
kmp();
for(int i=mm-1;i>=0;i--){
    cout<<P[i];
}
cout<<"\n";
}
  return 0;
}


