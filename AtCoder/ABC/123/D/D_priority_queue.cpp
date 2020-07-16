#include <bits/stdc++.h>
using namespace std;

struct comb {
  int x;
  int y;
  int z;
};
bool operator < (const comb &l, const comb &r) {
  return tie(l.x, l.y, l.z) < tie(r.x, r.y, r.z);
}

struct taste_data {
  long long taste;
  comb xyz;
};
bool operator < (const taste_data &l, const taste_data &r) {
  return l.taste < r.taste;
}

int main() {
  int x, y, z, k;
  cin >> x >> y >> z >> k;
  long long a[x], b[y], c[z];
  for ( int i = 0; i < x; i++ ) { cin >> a[i]; }
  for ( int i = 0; i < y; i++ ) { cin >> b[i]; }
  for ( int i = 0; i < z; i++ ) { cin >> c[i]; }
  sort(a, a+x, greater<long long>());
  sort(b, b+y, greater<long long>());
  sort(c, c+z, greater<long long>());

  priority_queue<taste_data> que;
  set<comb> used;
  que.push({a[0]+b[0]+c[0], {0, 0, 0}});
  used.insert({0, 0, 0});
  while ( k-- > 0 ) {
    taste_data most = que.top();
    que.pop();
    cout << most.taste << endl;
    comb now = most.xyz;
    if ( now.x+1 < x && used.find({now.x+1, now.y, now.z}) == used.end() ) {
      que.push({a[now.x+1]+b[now.y]+c[now.z], {now.x+1, now.y, now.z}});
      used.insert({now.x+1, now.y, now.z});
    }
    if ( now.y+1 < y && used.find({now.x, now.y+1, now.z}) == used.end() ) {
      que.push({a[now.x]+b[now.y+1]+c[now.z], {now.x, now.y+1, now.z}});
      used.insert({now.x, now.y+1, now.z});
    }
    if ( now.z+1 < z && used.find({now.x, now.y, now.z+1}) == used.end() ) {
      que.push({a[now.x]+b[now.y]+c[now.z+1], {now.x, now.y, now.z+1}});
      used.insert({now.x, now.y, now.z+1});
    }
  }
  return 0;
}
