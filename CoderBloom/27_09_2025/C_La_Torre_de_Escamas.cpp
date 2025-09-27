/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << 1 << endl;
    return;
  } else if (n == 2) {
    cout << 2 << endl;
    return;
  }
  
  int a = 1, b = 2, ans = 0;
  for (int i = 3; i <= n; i++) {
    ans = a + b;
    a = b;
    b = ans;
  }

  cout << ans << endl;
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