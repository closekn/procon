#include <bits/stdc++.h>
using namespace std;

int main() {
  string ans = "YES";
  set<int> st;
  int n;
  cin >> n;

  while ( n-- > 0 ) {
    int a;
    cin >> a;
    if ( st.find(a) != st.end() ) {
      ans = "NO";
    } else {
      st.insert(a);
    }
  }

  cout << ans << endl;
  return 0;
}
