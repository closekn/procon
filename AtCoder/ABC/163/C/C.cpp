#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> staff(n+1, 0);
  for ( int i = 2; i <= n; i++ ) {
    int a;
    cin >> a;
    staff[a]++;
  }
  for ( int i = 1; i <= n; i++ ) {
    cout << staff[i] << endl;
  }
  return 0;
}
