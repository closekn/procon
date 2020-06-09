#include <bits/stdc++.h>
using namespace std;

const int LIM = 500;
const int START = 250;

int main() {
  int n, goal_x, goal_y;
  cin >> n >> goal_x >> goal_y;
  goal_x += START;
  goal_y += START;
  int dist[LIM][LIM];
  for ( int i = 0; i < LIM; i++ ) {
    for ( int j = 0; j < LIM; j++ ) {
      dist[i][j] = -1;
    }
  }
  for ( int i = 0; i < n; i++ ) {
    int x, y;
    cin >> x >> y;
    x += START;
    y += START;
    dist[x][y] = -2;
  }

  queue<int> que_x, que_y;
  dist[START][START] = 0;
  que_x.push(START);
  que_y.push(START);

  while ( !que_x.empty() && !que_y.empty() ) {
    int x = que_x.front(); que_x.pop();
    int y = que_y.front(); que_y.pop();

    if ( x < 0 || LIM <= x || y < 0 || LIM <= y ) { continue; }

    if ( x+1 < LIM && y+1 < LIM && dist[x+1][y+1] == -1 ) { dist[x+1][y+1] = dist[x][y]+1; que_x.push(x+1); que_y.push(y+1); }
    if (              y+1 < LIM && dist[x][y+1]   == -1 ) { dist[x][y+1]   = dist[x][y]+1; que_x.push(x);   que_y.push(y+1); }
    if ( x-1 >= 0  && y+1 < LIM && dist[x-1][y+1] == -1 ) { dist[x-1][y+1] = dist[x][y]+1; que_x.push(x-1); que_y.push(y+1); }
    if ( x+1 < LIM              && dist[x+1][y]   == -1 ) { dist[x+1][y]   = dist[x][y]+1; que_x.push(x+1); que_y.push(y); }
    if ( x-1 >= 0               && dist[x-1][y]   == -1 ) { dist[x-1][y]   = dist[x][y]+1; que_x.push(x-1); que_y.push(y); }
    if (              y-1 >= 0  && dist[x][y-1]   == -1 ) { dist[x][y-1]   = dist[x][y]+1; que_x.push(x);   que_y.push(y-1); }
  }

  cout << dist[goal_x][goal_y] << endl;
  return 0;
}
