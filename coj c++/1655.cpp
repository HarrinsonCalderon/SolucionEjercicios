#include<bits/stdc++.h>
using namespace std;
int main(){

string a,b;
	int tama, tamb;
	int  n=0;

	while(cin>>a>>b)
	{
	 tama=a.length();
	 tamb=b.length();
	 n=0;
		for(int i=0; i < tamb; i++){
			if(b[i] == a[n]){
				n++;
			}
		}
		if(n == tama)
			cout<<"Yes\n";
		else{
            cout<<"No\n";
		}

	}

return 0;
}
