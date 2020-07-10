#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  long long a[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
  }

  long long x = 0;
  long long loop_len;
  long long not_loop_len;
  long long loop_start;
  vector<long long> not_loop_sum; not_loop_sum.push_back(0);
  vector<long long> loop_sum; loop_sum.push_back(0);
  vector<long long> next(n, -1);
  while ( true ) {
    if ( next[x%n] != -1 ) {
      loop_start = x%n;
      not_loop_len = 0;
      loop_len = 1;
      for ( int i = 0; i != loop_start; i = next[i] ) {
        not_loop_sum.push_back(a[i]+not_loop_sum[not_loop_len]);
        not_loop_len++;
      }
      loop_sum.push_back(a[loop_start]);
      for ( int i = next[loop_start]; i != loop_start; i = next[i] ) {
        loop_sum.push_back(a[i]+loop_sum[loop_len]);
        loop_len++;
      }
      break;
    }
    long long bef = x%n;
    x += a[x%n];
    next[bef] = x%n;
  }

  int q;
  cin >> q;
  while ( q-- > 0 ) {
    long long k;
    cin >> k;
    if ( not_loop_len >= k ) {
      cout << not_loop_sum[k] << endl;
    } else {
      long long sum = not_loop_sum[not_loop_len];
      k -= not_loop_len;
      sum += (k/loop_len) * loop_sum[loop_len];
      sum += loop_sum[k%loop_len];
      cout << sum << endl;
    }
  }

  return 0;
}
