// Problem: B. Interesting drink
// Contest: Codeforces - Codeforces Round 367 (Div. 2)
// URL: https://codeforces.com/problemset/problem/706/B
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
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	sort(nums.begin(),nums.end());
	int q;
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		cout<<upper_bound(nums.begin(),nums.end(),x)-nums.begin()<<"\n";
	}
	
	return 0;
}
