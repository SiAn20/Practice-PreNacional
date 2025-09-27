/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  string s, name = "eragon";
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);

  if (s == name)
    cout << "Aceptar" << endl;
  else
    cout << "Rechazar" << endl;
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