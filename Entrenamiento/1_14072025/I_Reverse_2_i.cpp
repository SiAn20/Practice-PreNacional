// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void sortPair(vector<int> &p, int b, int e) {
  if (b == e)
    return;

  int MOD = 1000000001, minl = MOD, minr = MOD, medio = (b + e) / 2 + 1;

  for (int i = b; i < medio; i++) // calculamos el min de la mitad izquierda
    minl = min(minl, p[i]);

  for (int i = medio; i <= e; i++) // calculamos el min de la mitad izquierda
    minr = min(minr, p[i]);

  if (minr < minl) // si el menor valor esta a la derecha
    reverse(p.begin() + b, p.begin() + e + 1);

  sortPair(p, b, medio - 1);
  sortPair(p, medio, e);
}

void solve() {
  int n, x;
  cin >> n;
  n = 1 << n;
  vector<int> p(n);
  for (int &y : p)
    cin >> y;

  sortPair(p, 0, n - 1);

  for (int z : p)
    cout << z << " ";
  cout << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

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