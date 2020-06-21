#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ct(100005, 0);
  long long sum = 0;
  for ( int i = 0; i < n; i++ ) {
    int a;
    cin >> a;
    ct[a]++;
    sum += a;
  }

  int q;
  cin >> q;
  while ( q-- > 0 ) {
    long long b, c;
    cin >> b >> c;
    long long num = ct[b];
    ct[b] = 0;
    sum -= b*num;
    sum += c*num;
    ct[c] += num;
    cout << sum << endl;
  }

  return 0;
}
