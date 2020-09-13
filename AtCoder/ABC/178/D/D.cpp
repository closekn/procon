#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

vector<long long> dp(2005, -1);

long long bfs(long long rem) {
  if ( rem == 0 ) { return 1; }
  if ( rem < 3 )  { return 0; }
  if ( dp[rem] != -1 ) { return dp[rem]; }

  long long ret = 0;
  for ( int i = 3; i <= rem; i++ ) {
    ret += bfs(rem-i);
    ret %= mod;
  }

  dp[rem] = ret;
  return ret;
}

int main() {
  long long s;
  cin >> s;
  cout << bfs(s) << endl;
  return 0;
}
