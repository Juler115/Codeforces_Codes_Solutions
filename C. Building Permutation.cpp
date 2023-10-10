// Problem: C. Building Permutation
// Contest: Codeforces - Codeforces Round 175 (Div. 2)
// URL: https://codeforces.com/problemset/problem/285/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	sort(nums.begin(),nums.end());
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=abs(i-nums[i-1]);
	}
	cout<<ans<<"\n";
	
	return 0;
}
