/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n, sum = 0, max = 0, min = 1e6;
  cin >> n;
  vector<int> v(n);
  for (int &x : v) {
    cin >> x;
    sum += x;
    if (x > max)
      max = x;
    if (x < min)
      min = x;
  }

  if (n < 3) {
    cout << 0 << endl;
    return;
  }
  cout << abs(sum - max - min) << endl;
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
