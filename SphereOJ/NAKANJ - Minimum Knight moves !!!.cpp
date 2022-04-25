#include<bits/stdc++.h>
using namespace std;

bool m[102][102];
int ii[]={-2,-1,1,2,2,1,-1,-2};
int jj[]={1,2,2,1,-1,-2,-2,-1};
struct cla{
int f,c,d;
};

int bfs(int f1,int c1,int f2,int c2){
queue<cla>q;
cla s;
s.f=f1;
s.c=c1;
s.d=0;
q.push(s);
m[f1][c1]=1;
if(s.f==f2 && s.c==c2)return s.d;
    while(q.size()){
        cla w=q.front();
        //cout<<"LLego: "<<w.f<<" "<<w.c<<" "<<w.d<<"\n";
        q.pop();
        if(w.f==f2 && w.c==c2)return w.d;
        //if(m[w.f][w.c])continue;
        for(int i=0;i<8;i++){
            if(w.f+ii[i]>=1 && w.f+ii[i]<=8 && w.c+jj[i]>=1 && w.c+jj[i]<=8 && !m[w.f+ii[i]][w.c+jj[i]]){
                int nf,nc;
                nf=w.f+ii[i];
                nc=w.c+jj[i];
                m[w.f][w.c]=true;
                cla h;
                h.f=nf;
                h.c=nc;
                h.d=w.d+1;
                q.push(h);
            }
        }
    }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int ca;
string a,b;
cin>>ca;
while(ca--){
cin>>a>>b;
int f1,c1,f2,c2;
stringstream s1;
f1=a[0]-'a'+1;
a=a.substr(1);
s1<<a;
s1>>c1;
f2=b[0]-'a'+1;
stringstream s2;
b=b.substr(1);
s2<<b;
s2>>c2;
//cout<<f1<<" "<<c1<<" "<<f2<<" "<<c2<<"\n";
memset(m,0,sizeof(m));
cout<<bfs(f1,c1,f2,c2)<<"\n";
}
return 0;
}




