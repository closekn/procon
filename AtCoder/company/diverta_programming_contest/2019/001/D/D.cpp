#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ll N, sum;
  cin >> N;

  sum = (ll)0;
  if( N != 1 ) {
    for ( ll m = 1; m*m <= N; m++ ) {
      ll t = N/m - 1;
      if ( N/t == N%t ) { sum += t; }
    }
  }

  cout << sum << endl;
  return 0;
}