#include <bits/stdc++.h>
using namespace std;

void dfs(int sum, int bef, int num, string ans) {
  if ( sum == 0 && num == 0 ) { cout << ans << endl; }
  if ( sum <= 0 || num <= 0 ) { return; }

  for ( int i = bef; i <= sum; i++ ) {
    string glue = to_string(i) + " ";
    dfs(sum-i, i, num-1, ans+glue);
  }
}

int main() {
  int n, s;
  cin >> n >> s;

  dfs(s, 1, n, "");
  return 0;
}
