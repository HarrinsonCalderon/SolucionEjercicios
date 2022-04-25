#include<bits/stdc++.h>
using namespace std;
int dx[] = {0,-1,0,1};
int dy[] = {-1,0,1,0};
char p[]={'O','N','L','S'};
int main(){
int a,b,cc,f,c,d,con=0;
while(cin>>a>>b>>cc &&a&&b&&cc){
char m[103][103],aux;
for(int i=0;i<a;i++){
 for(int j=0;j<b;j++){
 cin>>aux;
 if(aux=='N' ||aux=='S' || aux=='L' || aux=='O'){
    f=i;
    c=j;
 }
 m[i][j]=aux;
 }
}
for(int i=0;i<4;i++)
    if(m[f][c]==p[i])
    d=i;

string cad;
cin>>cad;
for(int i=0;i<cad.length();i++){
    if(cad[i]=='E'){
        d-=1;
        if(d<0)d=3;
    }else if(cad[i]=='D'){
        d=(d+1)%4;
    }else{
        if(f+dx[d]>=0 && f+dx[d]<a && c+dy[d]>=0 && c+dy[d]<b && m[f+dx[d]][c+dy[d]]!='#'){
            f=f+dx[d];
            c=c+dy[d];
            if(m[f][c]=='*'){
                con++;
                m[f][c]='.';
            }
        }
    }
}
cout<<con<<"\n";
con=0;
}
}

