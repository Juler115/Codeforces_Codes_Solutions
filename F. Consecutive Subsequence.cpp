// Problem: F. Consecutive Subsequence
// Contest: Codeforces - Codeforces Round 479 (Div. 3)
// URL: https://codeforces.com/problemset/problem/977/F
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
#define mk make_pair
#define s second
#define f first

vector<int> lis(vector<int>& arr)
{
	vector<int> ans;
	int n = arr.size();
	for (int i = 0; i < n; i++) {
		auto it
			= lower_bound(ans.begin(), ans.end(), arr[i]);
		if (it == ans.end()) {
			ans.push_back(arr[i]);
		}
		else {
			*it = arr[i];
		}
	}
	return ans;
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

	nums=lis(nums);
	for(auto a:nums)cout<<a<<" ";
	
	return 0;
}
