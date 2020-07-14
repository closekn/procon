#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n+1];
  for ( int i = 1; i <= n; i++ ) { cin >> a[i]; }
  
  vector<int> ans(n+1);
  int use_ball = 0;
  for ( int i = n; i >= 1; i-- ) {
    int sm = 0;
    for ( int j = 2; i*j <= n; j++ ) {
      sm += ans[i*j];
    }
    ans[i] = (
      (sm%2 == 0 && a[i] == 1) ||
      (sm%2 == 1 && a[i] == 0)
    ) ? 1 : 0;
    use_ball += ( ans[i] == 1 ) ? 1 : 0;
  }

  cout << use_ball << endl;
  for ( int i = 1; i <= n; i++ ) {
    if ( ans[i] == 1 ) { cout << i << ' '; }
  }
  if ( use_ball > 0 ) { cout << '\n'; }
  return 0;
}
