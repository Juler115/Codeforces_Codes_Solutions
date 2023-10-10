// Problem: A. AquaMoon and Strange Sort
// Contest: Codeforces - Codeforces Round 732 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1545/A
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
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>nums(n);
		set<int>dif;
		int ans=0;
		for(int i=0;i<n;i++)cin>>nums[i];
		for(int i=1;i<n;i++){
			if(nums[i]<nums[i-1])ans++;
			dif.insert(nums[i]);
		}
		if(ans==1 && dif.size()>2)cout<<"NO\n";
		else cout<<"YES\n";
	}
	
	return 0;
}
