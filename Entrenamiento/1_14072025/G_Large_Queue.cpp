// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
  int q, c, x, k, sum = 0;
  deque<pair<int, int>> a;
  cin >> q;

  while (q--) {
    cin >> x;
    if (x == 1) {
      cin >> c >> x;
      a.push_back({c, x});
    } else {
      cin >> k;
      for (; k;) {
        if (k >= a.front().first) {
          k -= a.front().first;
          sum += a.front().first * a.front().second;
          a.pop_front();
        } else {
          sum += k * a.front().second;
          a.front().first -= k;
          break;
        }
      }
      cout << sum << endl;
      sum = 0;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/