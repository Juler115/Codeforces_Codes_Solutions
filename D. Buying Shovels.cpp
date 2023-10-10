// Problem: D. Buying Shovels
// Contest: Codeforces - Codeforces Round 644 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1360/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int ans = n;

		for (int j = 1; j * j <= n; j++) {
			if (n % j == 0) {
				if (j <= k) {
					ans = min(ans, n / j);
				}

				if (n / j <= k) {
					ans = min(ans, j);
				}
			}
		}
		cout<<n/(n/ans)<<"\n";
	}
	
	return 0;
}
