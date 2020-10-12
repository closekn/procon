#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<bool> used(200005, false);

  int now = 0;
  for ( int i = 0; i < n; i++ ) {
    int p;
    cin >> p;
    used[p] = true;
    while ( used[now] ) { now++; }
    cout << now << endl;
  }

  return 0;
}
