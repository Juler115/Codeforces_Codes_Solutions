// Problem: B. Sereja and Suffixes
// Contest: Codeforces - Codeforces Round 215 (Div. 2)
// URL: https://codeforces.com/problemset/problem/368/B
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
	int n,m;
	cin>>n>>m;
	vector<int>dp(n+1);
	vector<int>nums(n);
	map<int,int>dif;
	for(int i=0;i<n;i++)cin>>nums[i],dif[nums[i]]++;
	dp[1]=dif.size();
	for(int i=1;i<n;i++){
		dif[nums[i-1]]--;
		if(dif[nums[i-1]]<=0)dif.erase(nums[i-1]);
		dp[i+1]=dif.size();
	}
	while(m--){
		int q;
		cin>>q;
		cout<<dp[q]<<"\n";
	}
	
	return 0;
}
