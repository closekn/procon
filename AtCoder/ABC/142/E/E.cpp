#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

int main() {
  int n, m;
  cin >> n >> m;
  int yen[m], open_num[m];
  vector<int> opens[m];
  for ( int i = 0; i < m; i++ ) {
    cin >> yen[i] >> open_num[i];
    for ( int k = 0; k < open_num[i]; k++ ) {
      int box;
      cin >> box;
      box--;
      opens[i].push_back(box);
    }
  }

  vector<int> dp(4097, INF);
  dp[0] = 0;
  for ( int i = 0; i < m; i++ ) {
    int open_kind = 0;
    // 鍵iで開けられる宝箱のbit
    for ( int k = 0; k < open_num[i]; k++ ) {
      open_kind |= (1 << opens[i][k]);
    }
    // 鍵iを用いるべきか、各セットにおいて判定
    for ( int bit = 0; bit < (1 << n); bit++ ) {
      dp[bit | open_kind] = min(dp[bit | open_kind], dp[bit] + yen[i]);
    }
  }

  int ans = ( dp[(1 << n) - 1] != INF ) ? dp[(1 << n) - 1] : -1;
  cout << ans << endl;
  return 0;
}
