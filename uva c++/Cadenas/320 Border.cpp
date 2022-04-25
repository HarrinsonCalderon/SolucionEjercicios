#include<bits/stdc++.h>
using namespace std;
const int f=32,c=32;
string m[f][c];
bool check(int i,int j){
 return i>=0 && j>=0 && i<f && j<c;
}
void dfs(int i,int j,bool ar,bool ab,bool de,bool iz,string cad,int pos){

  if(i<f && j<c && i>=0 && j>=0 && pos<cad.length()){
     if(cad[pos]=='N'){
        if(ar){
            i--;
            j++;
            if(check(i,j)){
                m[i][j]='x';
            }
            dfs(i,j,0,1,1,1,cad,pos+1);
        }else{
            i--;
             if(check(i,j)){
                m[i][j]='x';
            }
            dfs(i,j,0,1,1,1,cad,pos+1);
        }
     }else
          if(cad[pos]=='S'){
        if(ab){
            i++;
            j--;
            if(check(i,j)){
                m[i][j]='x';
            }
            dfs(i,j,1,0,1,1,cad,pos+1);
        }else{
            i++;
             if(check(i,j)){
                m[i][j]='x';
            }
            dfs(i,j,1,0,1,1,cad,pos+1);
        }
     }else
     if(cad[pos]=='E'){
        if(de){
            i++;
            j++;
            if(check(i,j)){
                m[i][j]='x';
            }
            dfs(i,j,1,1,0,1,cad,pos+1);
        }else{
            j++;
             if(check(i,j)){
                m[i][j]='x';
            }
            dfs(i,j,1,1,0,1,cad,pos+1);
        }
     }else
     if(cad[pos]=='W'){
        if(iz){
            i--;
            j--;
            if(check(i,j)){
                m[i][j]='x';
            }
            dfs(i,j,1,1,1,0,cad,pos+1);
        }else{
            j--;
             if(check(i,j)){
                m[i][j]='x';
            }
            dfs(i,j,1,1,1,0,cad,pos+1);
        }
     }

     }

  }




int main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

int x,y,ca,it=1;
string cad;
cin>>ca;
while(ca--){

cin>>x>>y;
y-=1;
y=(31-y);

/*
x=2;
y=1-1;
y=(31-y);*/
cin>>cad;
for(int i=0;i<f;i++){
 for(int j=0;j<c;j++){
    m[i][j]='.';
    //cout<<m[i][j];
 }
 //cout<<"\n";
}
swap(x,y);
//m[x][y]='X';

for(int i=0;i<cad.length();i++){
    if(cad[i]=='E'){
        m[x][y]='X';
        y++;
    }else if(cad[i]=='N'){
       m[x-1][y]='X';
       x--;
    }else if(cad[i]=='W'){
       m[x-1][y-1]='X';
       y--;
    }else if(cad[i]=='S'){
       m[x][y-1]='X';
       x++;
    }
  /*  cout<<"\n";
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<m[i][j];
        }
        cout<<"\n";
        }
    cout<<"\n";*/
}
cout<<"Bitmap #"<<it++<<"\n";
for(int i=0;i<f;i++){
 for(int j=0;j<c;j++){

    cout<<m[i][j];
 }
 cout<<"\n";
}
if(it!=1)cout<<"\n";
}

return 0;
}

