/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int const max_value = 1e6;
vector<int> criba(max_value);
vector<int> primos;

void init_criba() {
  for (int i = 0; i < max_value; ++i) {
    criba[i] = i;
  }
  for (int i = 2; i < max_value; ++i) {
    if (criba[i] == i) {
      primos.push_back(i);
      for (int j = i * i; j < max_value; j += i) {
        criba[j] = i;
      }
    }
  }
}

void solve() {
  int n, ans = 0, cnt = 0, x;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> x;
    if (binary_search(primos.begin(), primos.end(), x)) {
      if (x > ans)
        ans = x;
      cnt++;
    }
  }
  if (cnt == 0)
    ans = -1;
  cout << cnt << " " << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  init_criba();
  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/