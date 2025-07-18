// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int s1 = 0, s2 = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  if (n == 2) {
    cout << "Yes" << endl;
    return;
  }
  sort(a.begin(), a.end(), [](int x, int y) { return abs(x) < abs(y); });
  // contamos cuántos son iguales al primero y cuántos son su opuesto
  for (int i = 0; i < n; i++) {
    if (a[i] == a[0])
      s1++;
    else if (a[i] == -a[0])
      s2++;
  }
  // caso PG de razón -1 como 2,-2,2 o todos iguales
  if (s1 + s2 == n && abs(s1 - s2) < 2) {
    cout << "Yes" << endl;
    return;
  }
  // verificar PG con la propiedad: a_i^2 == a_{i-1} * a_{i+1}
  for (int i = 1; i < n - 1; i++) {
    if (1LL * a[i] * a[i] != 1LL * a[i - 1] * a[i + 1]) {
      cout << "No" << endl;
      return;
    }
  }

  cout << "Yes" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
    solve();
}
