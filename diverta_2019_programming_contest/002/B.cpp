#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x[n], y[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> x[i] >> y[i];
  }

  if ( n <= 2 ) { cout << 1; return 0; }

  int k = 0;
  vector<int> p, q;
  for ( int i = 0; i < n; i++ ) {
    for ( int j = i+1; j < n; j++ ) {
      p.push_back(x[i] - x[j]);
      q.push_back(y[i] - y[j]);
      k++;
    }
  }

  int max = 1, pm = 0, qm = 0;
  for ( int i = 0; i < k; i++ ) {
    if ( (p[i] == pm && q[i] == qm) || (p[i] == -1*pm && q[i] == -1*qm) ) { continue; }
    int len = 1;
    for ( int j = i+1; j < k; j++  ) {
      if ( (p[i] == p[j] && q[i] == q[j]) || (p[i] == -1*p[j] && q[i] == -1*q[j]) ) { len++; }
    }
    if ( len > max ) {
      max = len;
      pm = p[i];
      qm = q[i];
    }
  }

  cout << n-max << endl;
  return 0;
}