#include <bits/stdc++.h>
using namespace std;

struct city_num {
  int p;
  int machi;
  int shi;
};

bool cmp_num(const city_num &a, const city_num &b) { return a.p < b.p; }

struct city_year {
  int p;
  int y;
};

bool cmp_year(const city_year &a, const city_year &b) { return a.y < b.y; }

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<city_year> > year;
  vector<city_num> nums;
  for ( int i = 0; i < n; i++ ) {
    vector<city_year> tmp;
    year.push_back(tmp);
  }
  for ( int i = 0; i < m; i++ ) {
    int tp, ty;
    city_year tmp;
    cin >> tp >> ty;
    tmp.p = i+1;
    tmp.y = ty;
    year[tp-1].push_back(tmp);
  }
  for ( int i = 0; i < n; i++ ) {
    sort(year[i].begin(), year[i].end(), cmp_year);
    for ( int j = 0; j < year[i].size(); j++ ) {
      city_num tmp;
      tmp.p = year[i][j].p;
      tmp.machi = i+1;
      tmp.shi = j+1;
      nums.push_back(tmp);
    }
  }
  sort(nums.begin(), nums.end(), cmp_num);

  for ( int i = 0; i < m; i++ ) {
    printf("%06d%06d\n", nums[i].machi, nums[i].shi);
  }
  return 0;
}
