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

  int now = 0;
  int val = 0;
  while ( now < d ) {
    int mx = - (1e9 + 7);
    int select;
    for ( int k = 0; k < 26; k++ ) {
      int val_tmp = val;
      int now_tmp = now;
      int contest = k;
      val_tmp += s[now_tmp][contest];
      now_tmp++;
      for ( int i = 0; i < 26; i++ ) {
        if ( contest == i ) { continue; }
        val_tmp -= c[i]*(now_tmp-last[i]);
      }
      if ( val_tmp > mx ) {
        mx = val_tmp;
        select = contest;
      }
    }
    now++;
    last[select] = now;
    val = mx;
    printf("%d\n", select+1);
  }

  return 0;
}
