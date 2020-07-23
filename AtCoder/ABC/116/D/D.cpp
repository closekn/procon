#include <bits/stdc++.h>
using namespace std;

struct sushi {
  int kind;
  long long taste;
};
bool operator < (const sushi &l, const sushi &r) {
  return l.taste < r.taste;
}
bool operator > (const sushi &l, const sushi &r) {
  return l.taste > r.taste;
}

int main() {
  int n, k;
  cin >> n >> k;
  priority_queue<sushi> unused_sushi;
  for ( int i = 0; i < n; i++ ) {
    int t;
    long long d;
    cin >> t >> d;
    unused_sushi.push({t, d});
  }

  long long kind_num = 0, taste_value = 0;
  vector<bool> used_kind(n+1, false);
  priority_queue<sushi, vector<sushi>, greater<sushi>> delete_sushi_list;
  for ( int i = 0; i < k; i++ ) {
    sushi tmp = unused_sushi.top();
    unused_sushi.pop();
    taste_value += tmp.taste;
    if ( used_kind[tmp.kind] ) {
      delete_sushi_list.push(tmp);
    } else {
      used_kind[tmp.kind] = true;
      kind_num++;
    }
  }

  long long ans = taste_value + (kind_num * kind_num);
  while ( unused_sushi.size() > 0 && delete_sushi_list.size() > 0 ) {
    sushi tmp = unused_sushi.top();
    unused_sushi.pop();
    if ( !used_kind[tmp.kind] ) {
      used_kind[tmp.kind] = true;
      kind_num++;
      taste_value += (tmp.taste - delete_sushi_list.top().taste);
      delete_sushi_list.pop();
      ans = max(ans, taste_value + (kind_num * kind_num));
    }
  }

  cout << ans << endl;
  return 0;
}
