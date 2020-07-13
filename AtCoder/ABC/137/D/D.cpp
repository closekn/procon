#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> w[m];
  while ( n-- > 0 ) {
    int a, b;
    cin >> a >> b;
    a--;
    if ( a < m ) {
      w[a].push_back(b);
    }
  }

  long long ans = 0;
  priority_queue<int> q;
  for ( int i = 0; i < m; i++ ) {
    for ( int j = 0; j < w[i].size(); j++ ) {
      q.push(w[i][j]);
    }
    if ( ! q.empty() ) {
      ans += q.top();
      q.pop();
    }
  }

  cout << ans << endl;
  return 0;
}
