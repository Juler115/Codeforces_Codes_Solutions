// Problem: C. The Sports Festival
// Contest: Codeforces - Codeforces Round 715 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1509/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int jumpi(int l,int r, vector<int>&nums,vector<vector<int>>&dp){
	if(l==r)return dp[l][r]=0;
	if(dp[l][r]!=INT_MAX)return dp[l][r];
	return dp[l][r]=nums[r]-nums[l]+min(jumpi(l+1,r,nums,dp),jumpi(l,r-1,nums,dp));
}

void solve(){
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	sort(nums.begin(),nums.end());
	vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
	jumpi(0,n-1,nums,dp);
	cout<<dp[0][n-1];
	//for(auto a:dp){for(auto b:a)cout<<b<<" "; cout<<"\n";}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
	return 0;
}
