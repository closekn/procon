#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

int dp[15][1005]; // 二次元累積和

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  string s[h];
  for ( int i = 0; i < h; i++ ) { cin >> s[i]; }

  for ( int i = 1; i <= h; i++ ) {
    for ( int j = 1; j <= w; j++ ) {
      dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
      dp[i][j] += (s[i-1][j-1]-'0');
    }
  }

  int ans = INF;
  for ( int bit = 0; bit < (1<<(h-1)); bit++ ) {
    // h方向のcut場所
    int ans_h = 0;
    vector<int> cut_h;
    cut_h.push_back(0);
    for ( int i = 0; i < h-1; i++ ) {
      if ( bit & (1<<i) ) {
        cut_h.push_back(i+1);
        ans_h++;
      }
    }
    cut_h.push_back(h);

    // w方向 貪欲
    int ans_w = 0;
    int bef_w = 0;
    bool untenable = false;
    for ( int j = 1; j <= w; j++ ) {
      bool cuted = false;

      for ( int i = 1; i < cut_h.size(); i++ ) {
        int num1 = dp[cut_h[i]][j] - dp[cut_h[i-1]][j] - dp[cut_h[i]][bef_w] + dp[cut_h[i-1]][bef_w];
        if ( num1 > k ) {
          if ( j-1 == bef_w ) {
            untenable = true;
          } else {
            cuted = true;
            bef_w = j-1;
            ans_w++;
          }
          break;
        }
      }

      if ( cuted ) { j--; continue; }
      if ( untenable ) { ans_w = INF; break; }
    }

    ans = min(ans, (ans_h+ans_w));
  }

  cout << ans << endl;
  return 0;
}
