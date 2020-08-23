#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;
  long long sm = 0;
  for ( int i = 0; i < n.size(); i++ ) {
    sm += (n[i]-'0');
  }
  string ans = ( sm%9 == 0 ) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
