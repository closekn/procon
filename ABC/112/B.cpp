#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;
  int mn = 1001;
  for ( int i = 0; i < N; i++ ) {
    int c, t;
    cin >> c >> t;
    mn = ( t <= T && c < mn ) ? c : mn;
  }
  if ( mn != 1001 ) {
    cout << mn << endl;
  } else {
    cout << "TLE" << endl;
  }
  return 0;
}
