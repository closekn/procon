#include <bits/stdc++.h>
using namespace std;
 
int h, w;
int ch, cw;
int dh, dw;
string s[1005];
int dp[1005][1005];
 
void init_dp() {
  for ( int i = 0; i < h; i++ ) {
    for ( int j = 0; j < w; j++ ) {
      dp[i][j] = -1;
    }
  }
}

bool pos_ok(int cur_i, int cur_j) {
  if ( cur_i < 0 || h <= cur_i ) { return false; }
  if ( cur_j < 0 || w <= cur_j ) { return false; }
  if ( s[cur_i][cur_j] == '#' )  { return false; }
  if ( dp[cur_i][cur_j] != -1 )  { return false; }
  return true;
}
 
int main() {
  cin >> h >> w;
  cin >> ch >> cw; ch--; cw--;
  cin >> dh >> dw; dh--; dw--;
  for ( int i = 0; i < h; i++ ) { cin >> s[i]; }
 
  init_dp();

  deque<pair<int, int>> dq;
  deque<int> dist;
  dq.push_back(make_pair(ch, cw));
  dist.push_back(0);
  while ( dp[dh][dw] == -1 && !dq.empty() ) {
    int cur_i = dq.front().first;
    int cur_j = dq.front().second;
    dq.pop_front();
    int wp = dist.front(); dist.pop_front();
    dp[cur_i][cur_j] = wp;
    // walk
    int dir_x[4] = {1, 0, -1, 0};
    int dir_y[4] = {0, 1, 0, -1};
    for ( int i = 0; i < 4; i++ ) {
      int now_i = cur_i + dir_x[i];
      int now_j = cur_j + dir_y[i];
      if ( pos_ok(now_i, now_j) ) {
        dq.push_front(make_pair(now_i, now_j));
        dist.push_front(wp);
      }
    }
    // warp
    for ( int i = cur_i-2; i <= cur_i+2; i++ ) {
      for ( int j = cur_j-2; j <= cur_j+2; j++ ) {
        if ( pos_ok(i, j) ) {
          dq.push_back(make_pair(i, j));
          dist.push_back(wp+1);
        }
      }
    }
  }
 
  cout << dp[dh][dw] << endl;
  return 0;
}
