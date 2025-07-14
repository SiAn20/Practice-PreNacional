// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define end '\n'

void solve() {
  int N, combinaciones = 0;
  vector<string> S;
  unordered_set<string> set;

  cin >> N;
  S.resize(N); // ← CORRECCIÓN PRINCIPAL
  for (int i = 0; i < N; i++) {
    cin >> S[i];
  }

  for (int i = 0; i < N; i++) {
    for (int j = i; j < N; j++) {
      string combinada = S[i] + S[j];
      if (set.count(combinada) == 0) {
        combinaciones++;
        set.insert(combinada);
      }
    }
  }

  cout << combinaciones << end;
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
