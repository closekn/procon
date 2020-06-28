#include <bits/stdc++.h>
using namespace std;

void out_put(int ans[], int d) {
  for ( int i = 0; i < d; i++ ) {
    printf("%d\n", ans[i]+1);
  }
}

double now_time(clock_t start, clock_t end) {
  return ((double)(end - start) / CLOCKS_PER_SEC);
}

int main() {
  clock_t start = clock();

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

  // greedy
  int now = 0;
  int val = 0;
  int t[d];
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
    t[now] = select;
    now++;
    last[select] = now;
    val = mx;
  }

  // local search
  clock_t end;
  random_device rnd;
  mt19937 mt(rnd());
  uniform_int_distribution<> rand_day(0, d-1);
  uniform_int_distribution<> rand_contest(0, 25);

  end = clock();
  while ( now_time(start, end) < 1.5 ) {
    int change_day = rand_day(mt);
    int after_contest = rand_contest(mt);
    int val_tmp = val;

    int bef_contest = t[change_day];
    t[change_day] = after_contest;
    val_tmp -= s[change_day][bef_contest];
    val_tmp += s[change_day][after_contest];
    
    int last_bef_front = -1;
    for ( int i = change_day-1; i >= 0; i-- ) {
      if ( t[i] == bef_contest ) { last_bef_front = i; break; }
    }
    int last_bef_back = d;
    for ( int i = change_day+1; i < d; i++ ) {
      if ( t[i] == bef_contest ) { last_bef_back = i; break; }
    }
    val_tmp += c[bef_contest]*((change_day-last_bef_front)*(2+(change_day-last_bef_front-1))/2);
    val_tmp += c[bef_contest]*((last_bef_back-change_day)*(2+(last_bef_back-change_day-1))/2);
    val_tmp -= c[bef_contest]*((last_bef_back-last_bef_front)*(2+(last_bef_back-last_bef_front-1))/2);

    int last_after_front = -1;
    for ( int i = change_day-1; i >= 0; i-- ) {
      if ( t[i] == after_contest ) { last_after_front = i; break; }
    }
    int last_after_back = d;
    for ( int i = change_day+1; i < d; i++ ) {
      if ( t[i] == after_contest ) { last_after_back = i; break; }
    }
    val_tmp -= c[after_contest]*((change_day-last_after_front)*(2+(change_day-last_after_front-1))/2);
    val_tmp -= c[after_contest]*((last_after_back-change_day)*(2+(last_after_back-change_day-1))/2);
    val_tmp += c[after_contest]*((last_after_back-last_after_front)*(2+(last_after_back-last_after_front-1))/2);

    if ( val_tmp > val ) {
      val = val_tmp;
    } else {
      t[change_day] = bef_contest;
    }

    end = clock();
  }

  // ans
  out_put(t, d);

  return 0;
}
