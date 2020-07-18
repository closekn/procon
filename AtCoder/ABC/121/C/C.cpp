#include <bits/stdc++.h>
using namespace std;

struct drink_data {
  long long yen;
  int num;
};
bool operator < (const drink_data &l, const drink_data &r) {
  return l.yen > r.yen;
}

int main() {
  int n, m;
  priority_queue<drink_data> q;
  cin >> n >> m;
  for ( int i = 0; i < n; i++ ) {
    long long a;
    int b;
    cin >> a >> b;
    q.push({a, b});
  }

  long long ans = 0;
  while ( m-- > 0 ) {
    drink_data now_data = q.top();
    ans += now_data.yen;
    now_data.num--;
    q.pop();
    if ( now_data.num != 0 ) { q.push(now_data); }
  }
  cout << ans << endl;
  return 0;
}
