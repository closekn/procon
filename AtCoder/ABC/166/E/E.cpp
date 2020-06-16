#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long ans = 0;
  map<int, int> mp;
  for ( int i = 1; i <= n; i++ ) {
    int ai;
    cin >> ai;
    ans += mp[i-ai];
    mp[i+ai]++;
  }

  cout << ans << endl;
  return 0;
}
