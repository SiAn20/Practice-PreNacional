/*
  author: SiAn20
  Name: Sidney Angeinty Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

inline int norm(int x, int p) {
  x %= p;
  if (x < 0)
    x += p;
  return x;
}

int mod_pow(int a, int e, int p) {
  a = norm(a, p);
  int r = 1 % p;
  while (e > 0) {
    if (e & 1)
      r = (r * a) % p;
    a = (a * a) % p;
    e >>= 1;
  }
  return r;
}

inline int mod_inv(int v, int p) {
  v = norm(v, p);
  // assume v != 0
  return mod_pow(v, p - 2, p);
}

void solve() {
  int a, b, p, x1, y1, x2, y2;
  cin >> a >> b >> p >> x1 >> y1 >> x2 >> y2;

  a = norm(a, p);
  b = norm(b, p);
  x1 = norm(x1, p);
  y1 = norm(y1, p);
  x2 = norm(x2, p);
  y2 = norm(y2, p);

  if (x1 == x2) {
    if ((y1 + y2) % p == 0 || y1 == 0) {
      cout << "POINT_AT_INFINITY\n";
      return;
    }
    int num = norm(3 * (x1 * x1 % p) + a, p);
    int den = norm(2 * y1, p);
    int lambda = num * mod_inv(den, p) % p;
    int x3 = norm(lambda * lambda - x1 - x2, p);
    int y3 = norm(lambda * (x1 - x3) - y1, p);
    cout << x3 << " " << y3 << "\n";

  } else {
    int num = norm(y2 - y1, p);
    int den = norm(x2 - x1, p);
    int lambda = num * mod_inv(den, p) % p;
    int x3 = norm(lambda * lambda - x1 - x2, p);
    int y3 = norm(lambda * (x1 - x3) - y1, p);
    cout << x3 << " " << y3 << "\n";
  }
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

/*
     /\_/\
    ( o.o )
     > ^ <
*/
