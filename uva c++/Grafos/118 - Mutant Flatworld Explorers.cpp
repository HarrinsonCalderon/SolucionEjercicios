#include<bits/stdc++.h>

using namespace std;

char pos[] = {'N', 'E', 'S', 'W'};
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int main(){
    int a, b;
    cin >> a >> b;
    bool vis[50][50];
    memset(vis,0,sizeof(vis));
    int f, c;
    char di;
    string cad;
    while (cin>>f>>c>>di){
        int d;
        for (int i = 0; i < 4; ++i)
            if ( di== pos[i])
                d = i;
        bool ban = false;
        cin>>cad;
        for (int i=0; i<cad.size(); i++){
            if (cad[i] == 'L')
                d =(d + 3)%4;
            else
            if (cad[i] == 'R')
                d =(d+1)%4;
            else{
				if (f+dx[d]>=0 && f+dx[d]<=a && c+dy[d]>=0 && c+dy[d]<=b) {
                    f += dx[d];
                    c += dy[d];
				}else {
					if (!vis[f][c]){
						vis[f][c] = true;
						ban = true;
						break;
					}
				}
            }
        }
        cout <<f<<" "<<c<<" "<<pos[d];
        if(ban)cout<<" LOST";
        cout<<"\n";
    }
}

