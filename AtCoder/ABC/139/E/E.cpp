#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  queue<int> q[n+1];
  for ( int i = 1; i <= n; i++ ) {
    for ( int k = 1; k < n; k++ ) {
      int en;
      cin >> en;
      q[i].push(en);
    }
  }

  queue<int> today, tomorrow;
  for ( int i = 1; i <= n; i++ ) { today.push(i); }

  vector<vector<bool>> done(n+1, vector<bool>(n+1, false));
  int day = 0;
  int game_num = 0;
  
  while ( !today.empty() ) {
    day++;
    // 今日の試合チェック
    while ( !today.empty() ) {
      int team1 = today.front(); today.pop();
      int team2 = q[team1].front();
      done[team1][team2] = true;

      if ( done[team1][team2] == done[team2][team1] ) {
        q[team1].pop();
        q[team2].pop();
        game_num++;
        if ( !q[team1].empty() ) { tomorrow.push(team1); }
        if ( !q[team2].empty() ) { tomorrow.push(team2); }
      }
    }
    // 明日の試合のセット
    while ( !tomorrow.empty() ) {
      today.push(tomorrow.front());
      tomorrow.pop();
    }
  }

  if ( game_num != n*(n-1)/2 ) { day = -1; }
  cout << day << endl;
  return 0;
}
