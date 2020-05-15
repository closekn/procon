#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  char s[n+1];
  for ( int i = 0; i < n; i++ ) {
    cin >> s[i];
  }
  s[n] = '\0';

  s[k-1] = tolower(s[k-1]);

  cout << s << endl;

  return 0;
}