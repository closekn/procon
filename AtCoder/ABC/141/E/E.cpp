#include <bits/stdc++.h>
using namespace std;

vector<int> z_algorithm(string base_str, int start_index) {
  string s = base_str.substr(start_index, base_str.size()-start_index);
  vector<int> z(s.size());
  z[0] = s.size();
  int i = 1;
  int j = 0;
  while ( i < s.size() ) {
    while ( i+j < s.size() && s[j] == s[i+j] ) { j++; }
    z[i] = j;

    if ( j == 0 ) { i++; continue; }

    int k = 1;
    while ( k < j && k+z[k] < j ) {
      z[i+k] = z[k];
      k++;
    }
    i += k;
    j -= k;
  }
  return z;
}

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;

  int ans = 0;
  for ( int i = 0; i < n; i++ ) {
    vector<int> z = z_algorithm(s, i);
    for ( int j = 1; j < z.size(); j++ ) {
      if ( z[j] > ans && z[j] <= j ) {
        ans = z[j];
      }
    }
  }

  cout << ans << endl;
  return 0;
}
