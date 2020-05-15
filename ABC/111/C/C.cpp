#include <bits/stdc++.h>
using namespace std;

#define INF 100001

struct p_mx {
  int p;
  int mx;
};

int main() {
  int n;
  cin >> n;
  int v[n];
  for ( int i = 0; i < n; i++ ) { cin >> v[i]; }

  int n0[INF];
  int n1[INF];
  fill(n0, n0+INF, 0);
  fill(n1, n1+INF, 0);
  for ( int i = 0; i < n; i+=2 ) { n0[v[i]]++; }
  for ( int i = 1; i < n; i+=2 ) { n1[v[i]]++; }

  p_mx p0_1, p0_2, p1_1, p1_2;
  p0_1.p = p0_2.p = p1_1.p = p1_2.p = 0;
  p0_1.mx = p0_2.mx = p1_1.mx = p1_2.mx = 0;
  for ( int i = 1; i < INF; i++ ) {
    if ( n0[i] > p0_1.mx ) {
      p0_2.mx = p0_1.mx;
      p0_1.mx = n0[i];
      p0_2.p = p0_1.p;
      p0_1.p = i;
    } else if ( n0[i] > p0_2.mx ) {
      p0_2.mx = n0[i];
      p0_2.p = i;
    }
    if ( n1[i] > p1_1.mx ) {
      p1_2.mx = p1_1.mx;
      p1_1.mx = n1[i];
      p1_2.p = p1_1.p;
      p1_1.p = i;
    } else if ( n1[i] > p1_2.mx ) {
      p1_2.mx = n1[i];
      p1_2.p = i;
    }
  }

  int ans = 0;
  if ( p0_1.p != p1_1.p ) {
    ans = n - p0_1.mx - p1_1.mx;
  } else {
    ans = ( n-p0_1.mx-p1_2.mx < n-p0_2.mx-p1_1.mx ) ? n-p0_1.mx-p1_2.mx : n-p0_2.mx-p1_1.mx;
  }

  cout << ans << endl;
  return 0;
}
