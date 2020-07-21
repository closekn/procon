#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;
int n;
int need_a, need_b, need_c;
vector<int> l;

int dfs(int dep, int a, int b, int c) {
  if ( dep == n ) {
    int ret = ( min(min(a, b), c) > 0 ) ? abs(a - need_a) + abs(b - need_b) + abs(c - need_c) - 30 : INF;
    return ret;
  }

  int ret0 = dfs(dep+1, a, b, c);
  int ret1 = dfs(dep+1, a+l[dep], b, c) + 10;
  int ret2 = dfs(dep+1, a, b+l[dep], c) + 10;
  int ret3 = dfs(dep+1, a, b, c+l[dep]) + 10;

  return min(min(ret0, ret1), min(ret2, ret3));
}

int main() {
  cin >> n >> need_a >> need_b >> need_c;
  for ( int i = 0; i < n; i++ ) {
    int len;
    cin >> len;
    l.push_back(len);
  }

  cout << dfs(0, 0, 0, 0) << endl;
  return 0;
}
