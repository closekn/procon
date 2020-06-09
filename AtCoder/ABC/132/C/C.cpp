#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> d;
  for ( int i= 0; i < n; i++ ) {
    int tmp;
    cin >> tmp;
    d.push_back(tmp);
  }
  sort(d.begin(), d.end());
  int left, right;
  right = n/2;
  left = right - 1;
  int ans = d[right] - d[left];
  cout << ans << endl;
  return 0;
}