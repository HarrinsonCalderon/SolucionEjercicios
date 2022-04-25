    #include<bits/stdc++.h>
    using namespace std;
    int main(){

    long long int fibo [52];
    fibo[0] = 1;
    fibo[1] = 2;
    for(int i = 2; i < 50; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    long long int n;
    cin>>n;

    while( n!=0){
       cout<<fibo[n-1]<<"\n";
        cin>>n;
    }
    return 0;
    }

