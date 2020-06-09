#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int p[n];
  for ( int i = 0; i < n; i++ ) { cin >> p[i]; }
  int ans = 0;
  for ( int i = 1; i < n-1; i++ ) {
    vector<int> tmp;
    tmp.push_back(p[i-1]);
    tmp.push_back(p[i]);
    tmp.push_back(p[i+1]);
    sort(tmp.begin(), tmp.end());
    if ( tmp[1] == p[i] ) { ans++; }
  }
  cout << ans << endl;
  return 0;
}