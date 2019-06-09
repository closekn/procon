#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;
  int x[q], d[q], n[q];
  long long ans[q];
  for ( int i = 0; i < q; i++ ) {
    cin >> x[i] >> d[i] >> n[i];
  }

  for ( int i = 0; i < q; i++ ) {
    ans[i] = 1;
    for ( int k = 0; k < n[i]/2; k++ ) {
      ans[i] *= x[i] + k * d[i];
      ans[i] %= 1000003;
      ans[i] *= x[i] + (n[i]-(k+1)) * d[i];
      ans[i] %= 1000003;
    }
    if ( n[i]%2 == 1 ) {
      ans[i] *= x[i] + (n[i]/2) * d[i];
      ans[i] %= 1000003;
    }
  }

  for ( int i = 0; i < q; i++ ) {
    cout << ans[i] << endl;
  }
  return 0;
}