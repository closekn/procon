#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, h;
  cin >> n >> h;
  for ( int i = 0; i < n; i++ ) {
    int t;
    cin >> t;
    cout << t+h << ' ';
  }
  cout << endl;
  return 0;
}
