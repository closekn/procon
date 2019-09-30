#include <bits/stdc++.h>
using namespace std;

long long MOD = 1000000007;
long long TWO = 500000004;

int main() {
  int n;
  long long k;
  cin >> n >> k;
  int a[n];
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }
  
  long long ans = 0;
  long long s1 = (((k+1)*k)%MOD*TWO)%MOD;
  long long s2 = (((k-1)*k)%MOD*TWO)%MOD;
  for ( int i = 0; i < n; i++ ) {
    for ( int j = i+1; j < n; j++ ) {
      if ( a[i] > a[j] ) { ans = (ans+s1)%MOD; }
    }
    for ( int j = 0; j < i; j++ ) {
      if ( a[i] > a[j] ) { ans = (ans+s2)%MOD; }
    }
  }

  cout << ans << endl;

  return 0;
}
