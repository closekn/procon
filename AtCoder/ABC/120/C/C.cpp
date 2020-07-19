#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  cout << 2 * min(count(s.begin(), s.end(), '0'), count(s.begin(), s.end(), '1')) << endl;
  return 0;
}
