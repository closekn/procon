#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  vector<long long> ct(n+1, 0);
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
    ct[a[i]]++;
  }
  long long sum = 0;
  for ( int i = 0; i <= n; i++ ) {
    sum += ct[i]*(ct[i]-1)/2;
  }

  for ( int i = 0; i < n; i++ ) {
    long long ans = sum;
    ans -= (ct[a[i]]-1);
    cout << ans << endl;
  }

  return 0;
}
