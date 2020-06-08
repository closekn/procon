#include <bits/stdc++.h>
using namespace std;

int get_point( vector<int> solve, int probs[] ) {
  int point = 0;
  for ( int i = 0; i < solve.size(); i++ ) {
    point += probs[solve[i]];
  }
  return point;
}

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<int> mans[n];
  int probs[m];
  for ( int i = 0; i < m; i++ ) { probs[i] = n; }

  while ( q-- > 0 ) {
    int mode, man;
    cin >> mode >> man;
    man--;
    if ( mode == 1 ) {
      cout << get_point(mans[man], probs) << endl;
    }
    if ( mode == 2 ) {
      int prob;
      cin >> prob;
      prob--;
      mans[man].push_back(prob);
      probs[prob]--;
    }
  }

  return 0;
}
