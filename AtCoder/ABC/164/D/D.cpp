#include <bits/stdc++.h>
using namespace std;

const int mod = 2019;

int main() {
  string s;
  cin >> s;
  int n = s.size();

  vector<int> dp(n+1, 0);
  vector<int> ct(2019, 0);

  int dig = 1;
  ct[0] = 1;  // Φ
  for ( int i = n-1; i >= 0; i-- ) {
    dp[i] = (dp[i+1] + (s[i]-'0') * dig) % mod;
    ct[dp[i]]++;
    dig = (dig*10) % mod;
  }

  int ans = 0;
  for ( int i = 0; i < mod; i++ ) {
    ans += ct[i]*(ct[i]-1) / 2;
  }
  cout << ans << endl;
  return 0;
}
