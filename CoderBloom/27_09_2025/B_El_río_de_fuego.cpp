/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int n, m, x;
  cin >> n >> m;

  for (int i = 1; i <= n; ++i) {
    cin >> x;
    if (x == m) {
      cout << i << endl;
      return;
    }
  }
  cout << -1 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/