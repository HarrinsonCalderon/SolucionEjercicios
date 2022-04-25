#include<bits/stdc++.h>
using namespace std;
vector<int>grafo[105];
int vis[105];
bool is(int u){
queue<int>cola;
cola.push(u);
vis[u]=1;
while(cola.size()){
    u=cola.front();
    cola.pop();
    for(int i=0;i<grafo[u].size();i++){
        int v=grafo[u][i];
        if(vis[v]==0){
            cola.push(v);
            if(vis[u]==1 || vis[u]==0){
                vis[v]=2;
            }else if(vis[u]==2){
                vis[v]==1;
            }
        }
            if(vis[u]==vis[v]){
        return false;
    }
    }

}
return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	string cad;

	int s;
	int m,n,aux;

	while (cin >> n && n!=0)
	{

        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++){
            grafo[i].clear();
        }
		for (int i = 0 ; i < n ; ++i)
		{
			cin >> m;
			cin.ignore();
			getline(cin, cad);
			m--;
			stringstream ss;
			ss << cad;

			while (ss >> aux){
                aux--;
				grafo[m].push_back(aux);
				grafo[aux].push_back(m);
            }

		}

		if (is(0)){
        cout << "SIM\n";
        }
		else{
        cout << "NAO\n";
		}

	}
return 0;
}

