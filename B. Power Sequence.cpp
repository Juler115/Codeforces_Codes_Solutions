// Problem: B. Power Sequence
// Contest: Codeforces - Codeforces Round 666 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1397/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int64_t INF = 1e17;
inline int64_t mul(int64_t a, int64_t b)
{
	return (INF / a > b ? a * b : INF);
}

inline int64_t add(int64_t a, int64_t b)
{
	return (a + b >= INF ? INF : a + b);
}


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	sort(nums.begin(),nums.end());
	int ans=accumulate(nums.begin(), nums.end(), 0ll) - n;
	for (int x = 1; ; ++x) {
		int64_t curPow = 1, curCost = 0;
		for (int i = 0; i < n; ++i) {
			curCost = add(curCost, abs(nums[i] - curPow));
			curPow = mul(curPow, x);
		}

		if (curPow == INF || curPow / x > ans + nums[n - 1]) break;
		ans = min(ans, curCost);
	}
	cout<<ans<<"\n";
	
	return 0;
}
