#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p;
  vector<int> q;
  for ( int i = 0; i < n; i++ ) {
    int t;
    cin >> t;
    p.push_back(t);
  }
  for ( int i = 0; i < n; i++ ) {
    int t;
    cin >> t;
    q.push_back(t);
  }

  vector<vector<int>> permutation;
  vector<int> tmp;
  for ( int i = 1; i <= n; i++ ) {
    tmp.push_back(i);
  }
  do {
    permutation.push_back(tmp);
  } while ( next_permutation(tmp.begin(), tmp.end()) );

  cout << abs(find(permutation.begin(), permutation.end(), p) - find(permutation.begin(), permutation.end(), q)) << endl;
  return 0;
}
