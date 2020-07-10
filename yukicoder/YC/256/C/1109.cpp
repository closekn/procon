#include <bits/stdc++.h>
using namespace std;

const int mod = 12;

int main() {
  int n;
  cin >> n;
  int t[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> t[i];
  }

  vector<int> judge = {0, 2, 4, 5, 7, 9, 11};
  int ans = -1;
  for ( int k = 0; k < mod; k++ ) {
    bool check = true;
    for ( int i = 0; i < n; i++ ) {
      int d = ( t[i] >= k ) ? t[i]-k : (t[i]+12)-k;
      if ( find(judge.begin(), judge.end(), d) == judge.end() ) {
        check = false;
        break;
      }
    }
    if ( check ) {
      if ( ans == -1 ) {
        ans = k;
      } else {
        ans = -1;
        break;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
