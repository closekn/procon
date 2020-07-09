#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> people(n+1, k-q);

  while ( q-- > 0 ) {
    int a;
    cin >> a;
    people[a]++;
  }

  for ( int i = 1; i <= n; i++ ) {
    string ans = ( people[i] > 0 ) ? "Yes" : "No";
    cout << ans << endl;
  }
  return 0;
}
