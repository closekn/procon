#include <bits/stdc++.h>
using namespace std;

struct tree {
  int left;
  int right;
};

int main() {
  int n, k;
  cin >> n >> k;
  if ( (n-1)*(n-2)/2 < k ) { cout << -1 << endl; return 0; }
  vector<tree> tr;
  bool ch[n][n];
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      if ( i == j ) {
        ch[i][j] = true;
      } else {
        ch[i][j] = false;
      }
    }
  }
  int m = n-1;
  int now = (n-1)*(n-2)/2;
  for ( int i = 1; i < n; i++ ) {
    tree tmp;
    tmp.left = 0;
    tmp.right = i;
    tr.push_back(tmp);
    ch[0][i] = true;
    ch[i][0] = true;
  }
  
  for ( int i = 1; i < n; i++ ) {
    for ( int j = 1; j < n; j++ ) {
      if ( now == k ) { break; }
      if ( ! ch[i][j] ) {
        ch[i][j] = true;
        ch[j][i] = true;
        tree tmp;
        tmp.left = i;
        tmp.right = j;
        tr.push_back(tmp);
        m++;
        now--;
      }
    }
  }

  if ( now != k ) { m = -1; }
  cout << m << endl;
  for ( int i = 0; i < m; i++ ) {
    cout << tr[i].left+1 << ' ' << tr[i].right+1 << endl;
  }
  return 0;
}