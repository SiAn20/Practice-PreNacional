/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n, q;
  cin >> n >> q;
  vector<int> v(n);
  for (int &x : v)
    cin >> x;
  while (q--) {
    int x;
    cin >> x;
    auto it1 = lower_bound(v.begin(), v.end(), x);
    auto it2 = upper_bound(v.begin(), v.end(), x);

    int pos1 = -1, pos2 = -1;
    if (it1 != v.end() && *it1 == x)
      pos1 = it1 - v.begin() + 1;
    if (it2 != v.end() && it2 != v.begin() && *(it2 - 1) == x)
      pos2 = it2 - v.begin();

    cout << pos1 << " " << pos2 << endl;
  }
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
