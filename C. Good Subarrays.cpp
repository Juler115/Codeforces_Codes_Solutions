// Problem: C. Good Subarrays
// Contest: Codeforces - Educational Codeforces Round 93 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1398/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n, i, j; 
		cin >> n;
		int tab[n], x, ans = 0, pre[n + 1];
		string s; 
		cin >> s;
		
		for(i = 0; i < n; i++) {
			tab[i] = s[i] - '0';
		}
		for(i = 1; i <= n; i++) {
			pre[i] = pre[i - 1] + tab[i - 1];
		}
		for(i = 1; i <= n; i++) {
			for(j = i; j <= n; j++) {
				ans += (pre[j] - pre[i - 1] == j - i + 1);
			}
		}
		cout << ans << "\n";
	}
	
	return 0;
}
