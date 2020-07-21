#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int binary_search(long long arr[], int n, long long key) {
  int left = -1;
  int right = n;

  while ( right - left > 1 ) {
    int mid = left + (right - left) / 2;
    if ( arr[mid] >= key ) { right = mid; } else { left = mid; }
  }

  return right;
}

int main() {
  int a, b, q;
  cin >> a >> b >> q;
  long long s[a], t[b];
  for ( int i = 0; i < a; i++ ) { cin >> s[i]; }
  for ( int i = 0; i < b; i++ ) { cin >> t[i]; }

  while ( q-- > 0 ) {
    long long x;
    cin >> x;
    int s_pos = binary_search(s, a, x);
    int t_pos = binary_search(t, b, x);
    long long ans = INF;
    long long len;
    // right_shrine -> right_temple
    if ( s_pos < a && t_pos < b ) {
      len = abs(x - s[s_pos]) + abs(s[s_pos] - t[t_pos]);
      ans = min(len, ans);
    }
    // right_shrine -> left_temple
    if ( s_pos < a && t_pos-1 >= 0 ) {
      len = abs(x - s[s_pos]) + abs(s[s_pos] - t[t_pos-1]);
      ans = min(len, ans);
    }
    // left_shrine -> right_temple
    if ( s_pos-1 >= 0 && t_pos < b ) {
      len = abs(x - s[s_pos-1]) + abs(s[s_pos-1] - t[t_pos]);
      ans = min(len, ans);
    }
    // left_shrine -> left_temple
    if ( s_pos-1 >= 0 && t_pos-1 >= 0 ) {
      len = abs(x - s[s_pos-1]) + abs(s[s_pos-1] - t[t_pos-1]);
      ans = min(len, ans);
    }
    // right_temple -> right_shrine
    if ( t_pos < b && s_pos < a ) {
      len = abs(x - t[t_pos]) + abs(t[t_pos] - s[s_pos]);
      ans = min(len, ans);
    }
    // right_temple -> left_shrine
    if ( t_pos < b && s_pos-1 >= 0 ) {
      len = abs(x - t[t_pos]) + abs(t[t_pos] - s[s_pos-1]);
      ans = min(len, ans);
    }
    // left_temple -> right_shrine
    if ( t_pos-1 >= 0 && s_pos < a ) {
      len = abs(x - t[t_pos-1]) + abs(t[t_pos-1] - s[s_pos]);
      ans = min(len, ans);
    }
    // left_temple -> left_shrine
    if ( t_pos-1 >= 0 && s_pos-1 >= 0 ) {
      len = abs(x - t[t_pos-1]) + abs(t[t_pos-1] - s[s_pos-1]);
      ans = min(len, ans);
    }
    cout << ans << endl;
  }

  return 0;
}
