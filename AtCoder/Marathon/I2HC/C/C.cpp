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
    //printf("%d\n", val);
  }

  int m;
  scanf("%d", &m);
  while ( m-- > 0 ) {
    int change_day, after_contest;
    scanf("%d %d", &change_day, &after_contest);
    change_day--;
    after_contest--;
    int bef_contest = t[change_day];
    t[change_day] = after_contest;
    val -= s[change_day][bef_contest];
    val += s[change_day][after_contest];
    
    int last_bef_front = -1;
    for ( int i = change_day-1; i >= 0; i-- ) {
      if ( t[i] == bef_contest ) { last_bef_front = i; break; }
    }
    int last_bef_back = d;
    for ( int i = change_day+1; i < d; i++ ) {
      if ( t[i] == bef_contest ) { last_bef_back = i; break; }
    }
    val += c[bef_contest]*((change_day-last_bef_front)*(2+(change_day-last_bef_front-1))/2);
    val += c[bef_contest]*((last_bef_back-change_day)*(2+(last_bef_back-change_day-1))/2);
    val -= c[bef_contest]*((last_bef_back-last_bef_front)*(2+(last_bef_back-last_bef_front-1))/2);

    int last_after_front = -1;
    for ( int i = change_day-1; i >= 0; i-- ) {
      if ( t[i] == after_contest ) { last_after_front = i; break; }
    }
    int last_after_back = d;
    for ( int i = change_day+1; i < d; i++ ) {
      if ( t[i] == after_contest ) { last_after_back = i; break; }
    }
    val -= c[after_contest]*((change_day-last_after_front)*(2+(change_day-last_after_front-1))/2);
    val -= c[after_contest]*((last_after_back-change_day)*(2+(last_after_back-change_day-1))/2);
    val += c[after_contest]*((last_after_back-last_after_front)*(2+(last_after_back-last_after_front-1))/2);

    printf("%d\n", val);
  }

  return 0;
}
