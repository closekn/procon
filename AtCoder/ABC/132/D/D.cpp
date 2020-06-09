// nCrの記憶配列から解く

#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

vector<vector<long long> > comb(int n) {
  vector<vector<long long> > v(n+1, vector<long long>(n+1, 0));
  for ( int i = 0; i < v.size(); i++ ) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for ( int j = 1; j < v.size(); j++ ) {
    for ( int k = 1; k < j; k++ ) {
      v[j][k] = (v[j-1][k-1] + v[j-1][k]);
      v[j][k] %= mod;
    }
  }
  return v;
}

int main() {
  int n, k;
  cin >> n >> k;
  
  vector<vector<long long> > c = comb(n);

  for ( int i = 1; i <= k; i++ ) {
    if ( i+1 <= n-k+2 ) {
      cout << ( c[k-1][i-1] * c[n-k+1][i] ) % mod << endl;
    } else {
      cout << 0 << endl;
    }
  }

  return 0;
}