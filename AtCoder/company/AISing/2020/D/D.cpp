#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string x;
  cin >> n;
  cin >> x;

  vector<int> dp(200001, 0);
  for ( int i = 1; i <= 200000; i++ ) {
    dp[i] = dp[i % __builtin_popcount(i)] + 1;
  }

  int popct = count(x.begin(), x.end(), '1');

  // xi=1->0 のときの各桁の10進での大きさ rem mod (popct-1)
  vector<int> rem0(n, 0);
  if ( popct > 1 ) {
    rem0[n-1] = 1;
    for ( int i = n-2; i >= 0; i-- ) {
      rem0[i] = (rem0[i+1]*2) % (popct-1);
    }
  }
  // xi=0->1 のときの各桁の10進での大きさ rem mod (popct+1)
  vector<int> rem1(n, 0);
  rem1[n-1] = 1;
  for ( int i = n-2; i >= 0; i-- ) {
    rem1[i] = (rem1[i+1]*2) % (popct+1);
  }

  // xi=1->0 のときの10進でのx mod (popct-1)
  int x0 = 0;
  if ( popct > 1 ) {
    for ( int i = 0; i < n; i++ ) {
      if ( x[i] == '1' ) {
        x0 += rem0[i];
        x0 %= (popct-1);
      }
    }
  }
  // xi=0->1 のときの10進での x mod (popct+1)
  int x1 = 0;
  for ( int i = 0; i < n; i++ ) {
    if ( x[i] == '1' ) {
      x1 += rem1[i];
      x1 %= (popct+1);
    }
  }

  for ( int i = 0; i < n; i++ ) {
    int ans;
    if ( x[i] == '1' ) {
      if ( popct < 2 ) {
        ans = 0;
      } else {
        int r = x0 - rem0[i];
        r += (popct-1);
        r %= (popct-1);
        ans = dp[r] + 1;
      }
    } else {
      int r = x1 + rem1[i];
      r %= (popct+1);
      ans = dp[r] + 1;
    }
    cout << ans << endl;
  }
  return 0;
}
