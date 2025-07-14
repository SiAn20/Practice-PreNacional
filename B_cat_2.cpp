// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define end '\n'

void solve() {
  int N, combinaciones = 0;
  unordered_set<string> set;
  cin >> N;
  vector<string> S(N);
  
  for (int i = 0; i < N; i++) {
    cin >> S[i];
  }
  for (int i = 0; i < N; i++) {
    for (int j = i; j < N; j++) {
      if (set.count(S[i] + S[j]) == 0) {
        combinaciones += 1;
        set.insert(S[i] + S[j]);
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