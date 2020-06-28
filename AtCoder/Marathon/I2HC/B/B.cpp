#include <bits/stdc++.h>
using namespace std;

int main() {
  int d;
  int c[26];
  int last[26];
  scanf("%d", &d);
  for ( int i = 0; i < 26; i++ ) {
    scanf("%d", &c[i]);
    last[i] = 0;
  }
  int s[d][26];
  for ( int i = 0; i < d; i++ ) {
    for ( int j = 0; j < 26; j++ ) {
      scanf("%d", &s[i][j]);
    }
  }
  int t[d];
  for ( int i = 0; i < d; i++ ) {
    cin >> t[i];
    t[i]--;
  }

  int now = 0;
  int val = 0;
  while ( now < d ) {
    int contest = t[now];
    val += s[now][contest];
    now++;
    last[contest] = now;
    for ( int i = 0; i < 26; i++ ) {
      val -= c[i]*(now-last[i]);
    }
    printf("%d\n", val);
  }

  return 0;
}
