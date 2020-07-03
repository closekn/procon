#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;

  int ans = 0;
  int pos = s.find("ABC");
  while ( pos != string::npos ) {
    ans++;
    pos = s.find("ABC", pos+1);
  }

  cout << ans << endl;
  return 0;
}
