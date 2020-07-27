#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

int main() {
  int n, k;
  cin >> n >> k;
  int v[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> v[i];
  }

  int ans = 0;
  for ( int a = 0; a <= min(n, k); a++ ) {
    for ( int b = 0; a+b <= min(n, k); b++ ) {
      priority_queue<int, vector<int>, greater<int>> q;
      int sm = 0;
      int remk = k-(a+b);
      for ( int i = 0; i < a; i++ ) {
        sm += v[i];
        q.push(v[i]);
      }
      for ( int i = 0; i < b; i++ ) {
        sm += v[n-1-i];
        q.push(v[n-1-i]);
      }
      while ( remk-- > 0 && q.size() > 0 && q.top() < 0 ) {
        sm -= q.top();
        q.pop();
      }
      ans = max(ans, sm);
    }
  }

  cout << ans << endl;
  return 0;
}