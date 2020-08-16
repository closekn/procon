#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int main() {
  int n;
  long long k;
  cin >> n >> k;
  int p[n+1];
  long long c[n+1];
  for ( int i = 1; i <= n; i++ ) { cin >> p[i]; }
  for ( int i = 1; i <= n; i++ ) { cin >> c[i]; }

  long long ans = -INF;

  for ( int i = 1; i <= n; i++ ) {
    // iスタートにおける1ループ距離遷移数と獲得点
    long long loop_sum = 0;
    int loop_num = 0;
    int pos = i;
    while ( true ) {
      loop_num++;
      loop_sum += c[pos];
      pos = p[pos];
      if ( pos == i ) { break; }
    }

    // iスタートにおける1ループできない場合の最大獲得点
    long long sum = 0;
    int num = 0;
    pos = i;
    while ( true ) {
      num++;
      sum += c[pos];
      if ( num > k ) { break; }

      long long can_loop = (k - num) / loop_num;
      long long point = sum + max(0ll, loop_sum) * can_loop;
      ans = max(ans, point);

      pos = p[pos];
      if ( pos == i ) { break; }
    }
  }

  cout << ans << endl;
  return 0;
}
