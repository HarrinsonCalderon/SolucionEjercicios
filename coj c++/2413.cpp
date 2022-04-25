 #include <bits/stdc++.h>
 using namespace std;
int main() {
	int c;
	int n;

	cin>>n;
	for(int i=0;i<n;i++){
        cin>>c;

        if(c%5==0){
            cout<<"YES\n";
        }else{
        cout<<"NO\n";
        }
	}
	return 0;
}

