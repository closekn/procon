#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  set<long long> ans;
  for ( long long i = 1; i*i <= n; i++ ) {
    if ( n%i == 0 ) {
      ans.insert(i);
      ans.insert(n/i);
    }
  }

  for ( auto i : ans ) {
    cout << i << endl;
  }
  return 0;
}
