#include <bits/stdc++.h>
using namespace std;

struct mon {
  string s;
  int t;
};

bool operator<( const mon& left, const mon& right ) {
    return left.t < right.t;
}

int main() {
  int n;
  cin >> n;
  mon m[n];

  for ( int i = 0; i < n; i++ ) {
    cin >> m[i].s >> m[i].t;
  }

  sort(m, m+n);

  cout << m[n-2].s << endl;
  return 0;
}
