#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> x45, y45;
  for ( int i = 0; i < n; i++ ) {
    long long x, y;
    cin >> x >> y;
    x45.push_back(x+y);
    y45.push_back(x-y);
  }
  
  sort(x45.begin(), x45.end());
  sort(y45.begin(), y45.end());
  
  cout << max(x45[n-1]-x45[0], y45[n-1]-y45[0]) << endl;
  return 0;
}
