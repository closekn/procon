#include <string>
#include <vector>
using namespace std;

/**
 * @fn Z-Algorithm
 * @brief 長さNの文字列Sについて、i = start_index,start_index+1,...,N でのS[start_index~N]とs[i~N]の共通接頭辞の長さをO(N)で求める
 * @param (string base_str) ベース文字列
 * @param (int start_index) アルゴリズム探査開始インデックス
 * @return (vector<int>) 各iにおける共通接頭辞の長さ
 */
vector<int> z_algorithm(string base_str, int start_index) {
  string s = base_str.substr(start_index, base_str.size()-start_index);
  vector<int> z(s.size());
  z[0] = s.size();

  int i = 1;
  int j = 0;
  while ( i < s.size() ) {
    while ( i+j < s.size() && s[j] == s[i+j] ) { j++; }
    z[i] = j;

    if ( j == 0 ) { i++; continue; }

    int k = 1;
    while ( k < j && k+z[k] < j ) {
      z[i+k] = z[k];
      k++;
    }
    i += k;
    j -= k;
  }
  return z;
}
