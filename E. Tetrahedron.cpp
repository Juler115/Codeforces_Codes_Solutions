// Problem: E. Tetrahedron
// Contest: Codeforces - Codeforces Round 113 (Div. 2)
// URL: https://codeforces.com/problemset/problem/166/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
int MOD=1e9+7;


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int ans=1;
	int zD = 1;
	int zABC = 0;
	for (int i = 1; i <= n; i++) {
		int nzD = zABC * 3LL % MOD;
		int nzABC = (zABC * 2LL + zD) % MOD;
		zD = nzD;
		zABC = nzABC;
	}
	cout << zD;
	
	return 0;
}
