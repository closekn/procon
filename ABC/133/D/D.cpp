#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  long long a[n];
  long long sum = 0, sum2 = 0;
  for ( long long i = 0; i < n; i++ ) {
    cin >> a[i];
    sum += a[i];
    a[i] *= 2;
    if ( i%2 == 1 ) { sum2 += a[i];  }
  }

  long long m[n];
  m[0] = sum - sum2;
  for ( long long i = 1; i < n; i++ ) { m[i] = a[i-1] - m[i-1]; }

  for ( long long i = 0; i < n-1; i++ ) {
    cout << m[i] << ' ';
  }
  cout << m[n-1] << endl;
  return 0;
}
