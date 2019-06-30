#include <bits/stdc++.h>
using namespace std;

//-- nCr = v[n][r] の 記憶配列作成
vector<vector<long long> > comb(int n) {
  vector<vector<long long> > v(n+1, vector<long long>(n+1, 0));
  for ( int i = 0; i < v.size(); i++ ) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for ( int j = 1; j < v.size(); j++ ) {
    for ( int k = 1; k < j; k++ ) {
      v[j][k] = (v[j-1][k-1] + v[j-1][k]);
    }
  }
  return v;
}

//-- nCr = nCr(n, r) の 関数

int main() {
  vector<vector<long long> > c = comb(6);
  cout << c[6][3] << endl;
  return 0;
}