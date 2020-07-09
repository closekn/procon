#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  priority_queue<int> pq;
  for ( int i = 0; i < n; i++ ) {
    int a;
    cin >> a;
    pq.push(a);
  }

  while ( m-- > 0 ) {
    int tmp = pq.top();
    tmp /= 2;
    pq.pop();
    pq.push(tmp);
  }

  long long ans = 0;
  while ( !pq.empty() ) {
    ans += pq.top();
    pq.pop();
  }
  cout << ans << endl;
  return 0;
}
