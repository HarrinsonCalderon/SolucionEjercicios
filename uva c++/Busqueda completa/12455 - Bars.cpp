#include<bits/stdc++.h>
using namespace std;
int l[105];

int main()
{
	int t, n, p;
	cin >> t;
	while(t--)
	{
		cin >> p >> n;
		for (int i = 0; i < n; ++i)
			cin >> l[i];
		int suma = 0;
		bool ban = false;
		for (int i = 0; i < (1 << n); ++i){
			suma = 0;
			for (int j = 0; j < n; ++j){
				if(i & (1 << j)){
                        suma += l[j];
				}
			if (suma == p){
				ban = true;
				break;
			}
			}
		}

		if (ban)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
//Suma de subconjuntos
