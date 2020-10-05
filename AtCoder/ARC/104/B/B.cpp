#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;

  int sm_a[n+1], sm_t[n+1], sm_g[n+1], sm_c[n+1];
  sm_a[0] = sm_t[0] = sm_g[0] = sm_c[0] = 0;
  for ( int i = 1; i <= n; i++ ) {
    sm_a[i] = sm_a[i-1];
    sm_t[i] = sm_t[i-1];
    sm_c[i] = sm_c[i-1];
    sm_g[i] = sm_g[i-1];
    if ( s[i-1] == 'A' ) { sm_a[i]++; }
    if ( s[i-1] == 'T' ) { sm_t[i]++; }
    if ( s[i-1] == 'C' ) { sm_c[i]++; }
    if ( s[i-1] == 'G' ) { sm_g[i]++; }
  }

  long long ans = 0;
  for ( int i = 0; i < n; i++ ) {
    for ( int j = i+1; j <= n; j++ ) {
      int a = sm_a[j]-sm_a[i];
      int t = sm_t[j]-sm_t[i];
      int c = sm_c[j]-sm_c[i];
      int g = sm_g[j]-sm_g[i];
      if ( a == t && c == g ) { ans++; }
    }
  }

  cout << ans << endl;
  return 0;
}
