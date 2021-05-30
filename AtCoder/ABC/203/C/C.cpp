#include <bits/stdc++.h>
using namespace std;

struct fre {
  long long a;
  long long b;
};

bool operator<( const fre& left, const fre& right ) {
    return left.a < right.a;
}

int main() {
  int n;
  long long k;
  cin >> n >> k;
  fre f[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> f[i].a >> f[i].b;
  }

  sort(f, f+n);
  for ( int i = 0; i < n; i++ ) {
    if ( k >= f[i].a ) {
      k += f[i].b;
    } else {
      break;
    }
  }
  
  cout << k << endl;
  return 0;
}
