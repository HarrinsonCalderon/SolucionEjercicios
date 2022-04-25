
#include <bits/stdc++.h>
using namespace std;
int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else
    return (josephus(n - 1, k) + k-1) % n + 1;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
  int a,b,c;
  cin>>c;
  for(int i=1;i<=c;i++){
    cin>>a>>b;
    cout<<"Case "<<i<<": "<<josephus(a,b)<<"\n";
  }

  return 0;
}

