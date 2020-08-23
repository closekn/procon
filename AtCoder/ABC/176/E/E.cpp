#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, m;
  cin >> h >> w >> m;
  pair<int, int> boms[m];
  map<int, int> hs, ws;

  for ( int i = 0; i < m; i++ ) {
    int hi, wi;
    cin >> hi >> wi;
    boms[i] = make_pair(hi, wi);
    hs[hi]++;
    ws[wi]++;
  }

  // 行・列における破壊対象の最大数
  int max_h = 0;
  int max_w = 0;
  for ( auto ph : hs ) { if ( ph.second > max_h ) { max_h = ph.second; } }
  for ( auto pw : ws ) { if ( pw.second > max_w ) { max_w = pw.second; } }
  // 破壊対象が最大数の行数・列数
  int max_h_num = 0;
  int max_w_num = 0;
  for ( auto ph : hs ) { if ( ph.second == max_h ) { max_h_num++; } }
  for ( auto pw : ws ) { if ( pw.second == max_w ) { max_w_num++; } }
  // 交差点の組み合わせ総数に対して、交差点に破壊対象がある場合デクリメント
  long long max_set_num = max_h_num * max_w_num;
  for ( int i = 0; i < m; i++ ) {
    if ( hs[boms[i].first] == max_h && ws[boms[i].second] == max_w ) {
      max_set_num--;
    }
  }
  // 全交差点に破壊対象があれば、max_h + max_w -1
  int ans = ( max_set_num != 0 ) ? max_h + max_w : max_h + max_w -1;
  
  cout << ans << endl;
  return 0;
}
