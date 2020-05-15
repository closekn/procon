#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  int h, w;
  cin >> H >> W;
  cin >> h >> w;
  cout << H*W - h*W - H*w + h*w << endl;
  return 0;
}
