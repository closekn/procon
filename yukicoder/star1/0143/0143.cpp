#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, n, f;
  cin >> k >> n >> f;
  int sum = 0, ans;
  for ( int i = 0; i < f; i++ ) {
    int t;
    cin >> t;
    sum += t;
  }
  ans = k*n - sum;
  ans = ( ans >= 0 ) ? ans : -1;
  cout << ans << endl;
  return 0;
}