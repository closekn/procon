#include <bits/stdc++.h>
using namespace std;

int N = 1e7;

int main() {

  vector<long long> csum;
  csum.push_back(0);
  for ( int i = 1; i < N; i++ ) {
    csum.push_back(i + csum[i-1]);
  }

  while ( true ) {

    int b;
    cin >> b;
    if ( b == 0 ) { break; }
    int start = 0;
    int end = 2;
    
    while ( true ) {
      int tmp = csum[end] - csum[start];
      if ( tmp == b ) { break; }
      if ( tmp < b ) { end++; }
      if ( tmp > b ) { start++; }
    }

    cout << start+1 << ' ' << end - start << endl;

  }

  return 0;
}
