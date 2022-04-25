
    #include<bits/stdc++.h>
    using namespace std;
    int main(){

     unsigned long long fibo [51];
    fibo[1] = 2;
    fibo[2] = 3;
    for(int i = 3; i < 51; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    int n, caso = 1;
    cin >> n;
    while (n--){
        cout << "Scenario #" << caso++ << ":" << endl;
        int n;
        cin >> n;
        cout << fibo[n] << endl << endl;
    }
    return 0;
    }

