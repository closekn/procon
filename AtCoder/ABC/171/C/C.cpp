#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  vector<char> c;

  while ( n > 0 ) {
    long long r = n%26;
    n /= 26;
    r--;
    if ( r == -1 ) {
      n--;
      r = 25;
    }
    c.push_back('a'+r);
  }

  for ( int i = c.size()-1; i >= 0; i-- ) {
    cout << c[i];
  }
  cout << endl;
  return 0;
}
