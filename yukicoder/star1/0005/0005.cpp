#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, n;
  cin >> l;
  cin >> n;
  vector<int> w;
  for ( int i = 0; i < n; i++ ) {
    int t;
    cin >> t;
    w.push_back(t);
  }
  sort(w.begin(), w.end());
  int num = 0;
  for ( int i = 0; i < n; i++ ) {
    if ( l < w[i] ) { break; }
    l -= w[i];
    num++;
  }
  cout << num << endl;
  return 0;
}