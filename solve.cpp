#include <bits/stdc++.h>
using namespace std;
bool b[105];
int main() {
  int n, m, x, y;
  cin >> n >> m;
  b[0] = 1;
  for (int i = 1; i <= n; ++i) {
    cin >> x >> y;
    for (int j = x + 1; j <= y; ++j) b[j] = 1;
  }
  int w = 0;
  for (int i = 0; i <= m; i++)
    if (b[i] == 0) w = 1;
  if (w)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
  return 0;
}