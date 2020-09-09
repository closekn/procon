#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }
  sort(a.begin(), a.end());

  int mx = a[n-1];
  auto iter = upper_bound(a.begin(), a.end(), mx/2);
  int md = ( abs((*iter)-(mx/2.0)) < abs((*(iter-1))-(mx/2.0)) ) ? *iter : *(iter-1);

  cout << mx << ' ' << md << endl;
  return 0;
}
