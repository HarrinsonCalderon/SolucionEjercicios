#include<bits/stdc++.h>
using namespace std;

const int MAX=90;
int f,c,con;
char m[MAX][MAX];
bool vis[MAX][MAX];
int dx[] = {-1, 0, 1,  0};
int dy[] = { 0, 1, 0, -1};

void d(int i,int j,char a){
 if(i>=0 && i<f && j>=0 && j<c && m[i][j]==a && !vis[i][j]){
    con++;
    m[i][j]='.';
    vis[i][j]=true;
    for(int q=0;q<4;q++){
        d(i+dx[q],j+dy[q],a);
    }


 }
}
bool cmp(pair<char,int>a,pair<char,int>b){
 if(a.second!=b.second){
    return a.second>b.second;
 }else
 if(a.first!=b.first){
    return a.first<b.first;
 }
 return false;
}
int main() {
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
vector<pair<char,int>>l;
int it=1;
char aux;
while(cin>>f>>c && f&&c){

for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        cin>>m[i][j];
        vis[i][j]=false;
        if(m[i][j]=='.')vis[i][j]=true;
    }
}
l.clear();
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
         if(!vis[i][j]){
            con=0;
            aux=m[i][j];
            d(i,j,m[i][j]);
            l.push_back({aux,con});
         }


    }
}
cout<<"Problem "<<it++<<":\n";
sort(l.begin(),l.end(),cmp);
for(pair<char,int>i:l){
 cout<<i.first<<" "<<i.second<<"\n";
}

}
return 0;
}



