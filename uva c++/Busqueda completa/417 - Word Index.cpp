#include<bits/stdc++.h>
using namespace std;

map<string,int>m;
string t,w,x,y,z;
int con=1;
string cad="";
void sol(){
for(char i='a';i<='z';i++){
   // cout<<i<<"\n";
    t=i;
    cad=t;
    m[cad]=con;
    con++;
}
for(char i='a';i<='z';i++){
    t=i;
   for(char j=i+1;j<='z';j++){
    // cout<<i<<" "<<j<<"\n";
    w=j;
    //cout<<cad<<"<-\n";
    cad=t+w;
    m[cad]=con;
    con++;
    }
}

for(char i='a';i<='z';i++){
     t=i;
   for(char j=i+1;j<='z';j++){
       w=j;
       for(char a=j+1;a<='z';a++){
         //  cout<<i<<" "<<j<<" "<<a<<"\n";
            x=a;
                cad=t+w+x;
                m[cad]=con;
                con++;
        }
    }
}
for(char i='a';i<='z';i++){
     t=i;
   for(char j=i+1;j<='z';j++){
        w=j;
       for(char a=j+1;a<='z';a++){
            x=a;
         for(char b=a+1;b<='z';b++){
          // cout<<i<<" "<<j<<" "<<a<<" "<<b<<"\n";
                y=b;
                cad=t+w+x+y;
                m[cad]=con;
                con++;
            }
        }
    }
}
for(char i='a';i<='z';i++){
     t=i;
   for(char j=i+1;j<='z';j++){
        w=j;
       for(char a=j+1;a<='z';a++){
            x=a;
         for(char b=a+1;b<='z';b++){
              y=b;
            for(char c=b+1;c<='z';c++){
              //  cout<<i<<" "<<j<<" "<<a<<" "<<b<<" "<<c<<"\n";
                z=c;
                cad=t+w+x+y+z;
                m[cad]=con;
                con++;

            }
          }
        }
    }
}
}
int main() {
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
string aux;
sol();
bool flag=0;

while(cin>>aux){
        cout<<m[aux]<<"\n";

}

return 0;

}

