// Problem: C. Ball in Berland
// Contest: Codeforces - Codeforces Round 697 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1475/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int A, B, k;
  cin >> A >> B >> k;
  vector<int> a(A), b(B);
  vector<pair<int, int>> edges(k);
  for (auto &[x, y] : edges) {
    cin >> x;
  }
  for (auto &[x, y] : edges) {
    cin >> y;
  }
  for (auto &[x, y] : edges) {
    x--;
    y--;
    a[x]++;
    b[y]++;
  }
  ll ans = 0;
  for (auto &[x, y] : edges) {
    ans += k - a[x] - b[y] + 1;
  }
  cout << ans / 2 << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}