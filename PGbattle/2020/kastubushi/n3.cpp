#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> room(n+1, 0);
  for ( int i = 0; i < n-1; i++ ) {
    int a, b;
    cin >> a >> b;
    room[a]++;
    room[b]++;
  }

  int ans = 0;
  for ( int i = 2; i <= n; i++ ) {
    if ( room[i] == 1 ) { ans++; }
  }
  cout << ans << endl;
  return 0;
}
