#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  long long a[n];
  for ( long long i = 0; i < n; i++ ) {
    cin >> a[i];
  }

  long long sum = 0;
  for ( long long i = 0; i < n; i++ ) {
    sum += (i+1)*(n-i) * a[i];
  }

  cout << sum << endl;
  return 0;
}
