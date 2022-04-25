 #include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
string cad;
cin>>n;
while(n--){
cin>>cad;
vector<char>l;
for(int i=0;i<cad.length();i++){
    l.push_back(cad[i]);
}
sort(l.begin(),l.end());
do{
 for(int i=0;i<cad.length();i++){
    cout<<l[i];
}
cout<<"\n";
}while(next_permutation(l.begin(),l.end()));
cout<<"\n";
l.clear();
}
return 0;
}
