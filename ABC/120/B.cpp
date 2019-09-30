#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  int tmp;
  while ( a%b != 0 ) {
    tmp = b;
    b = a % b;
    a = tmp;
  }
  return b;
}

int main() {
  int a, b, k;
  cin >> a >> b >> k;
  int m = gcd(a, b);
  vector<int> div;
  for ( int i = 1; i <= sqrt(m); i++ ) {
    if ( m%i == 0 ) {
      div.push_back(i);
      if ( m/i != i ) { div.push_back(m/i); }
    }
  }
  sort(div.begin(), div.end());

  cout << div[div.size()-k] << endl;
  return 0;
}
