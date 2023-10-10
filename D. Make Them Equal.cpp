// Problem: D. Make Them Equal
// Contest: Codeforces - Educational Codeforces Round 122 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1633/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mk make_pair
#define s second
#define f first

const int N=1e3+1;
vector<int> d(N, N);

void solve(){
	int n, k;
    cin >> n >> k;
    vector<int> b(n), c(n);
    for (int &x : b) cin >> x;
    for (int &x : c) cin >> x;
    int sum = 0;
    for (int x : b) sum += d[x];
    k = min(k, sum);
    vector<int> dp(k + 1, 0);
    for (int i = 0; i < n; ++i) {
      for (int j = k - d[b[i]]; j >= 0; j--) {
        dp[j + d[b[i]]] = max(dp[j + d[b[i]]], dp[j] + c[i]);
      }
    }
    cout << *max_element(dp.begin(), dp.end()) << '\n';
}

int32_t main()
{
	  d[1] = 0;
	  for (int i = 1; i < N; ++i) {
	    for (int x = 1; x <= i; ++x) {
	      int j = i + i / x;
	      if (j < N) d[j] = min(d[j], d[i] + 1);
	    }
	  }
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
