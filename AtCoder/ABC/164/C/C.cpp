#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> kind;
  for ( int i = 0; i < n; i++ ) {
    string s;
    cin >> s;
    kind[s]++;
  }
  int ans = 0;
  for ( auto m : kind ) {
    ans++;
  }
  cout << ans << endl;
  return 0;
}
