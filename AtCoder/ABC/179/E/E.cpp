#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, x, m;
  cin >> n >> x >> m;

  vector<long long> sm(100005, 0);
  vector<long long> cnt(100005, 0);

  sm[1] = x;
  cnt[x] = 1;
  long long first_sum = 0, first_len = 0;
  long long loop_sum = 0, loop_len = 0, loop_num = 0;
  long long last_sum = 0, last_len = 0;

  long long a = x;
  for ( int i = 2; i <= n; i++ ) {
    a = a * a % m;
    if ( cnt[a] != 0 ) {
      loop_len = i - cnt[a];
      first_len = i-1 - loop_len;
      first_sum = sm[first_len];
      loop_sum = sm[i-1] - first_sum;
      loop_num = (n - first_len) / loop_len;
      last_len = (n - first_len) % loop_len;
      last_sum = sm[first_len+last_len] - sm[first_len];
      break;
    }
    sm[i] = a + sm[i-1];
    cnt[a] = i;
  }

  long long ans = ( loop_num != 0 ) ? first_sum + (loop_sum*loop_num) + last_sum : sm[n];
  cout << ans << endl;
  return 0;
}
