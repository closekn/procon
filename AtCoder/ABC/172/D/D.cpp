#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;

  long long ans = 0;
  for ( long long i = 1; i <= N; i++ ) {
    long long a = i;
    long long d = i;
    long long n = N/i;
    ans += n * (2*a + (n-1)*d) / 2;
  }

  cout << ans << endl;
  return 0;
}
