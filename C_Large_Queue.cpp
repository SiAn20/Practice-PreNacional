// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define end '\n'

int Q, query, c, x, k, puntero = 0, result = 0;
map<int, int> sum_acum;
queue<int> fila;

void solve() {
  cin >> Q;
  for (int i = 1; i < Q; i++) {
    cin >> query;
    if (query == 1) {
      cin >> c >> x;
      while (c--) {
        fila.push(x);
        sum_acum[i] += sum_acum[i - 1] + x;
      }
    } else {
      cin >> k;
      result = sum_acum[k + puntero] - result;
      cout << result << end;
      puntero += k;
    }
  }
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