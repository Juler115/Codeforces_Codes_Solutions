// Problem: B. Replace and Keep Sorted
// Contest: Codeforces - Codeforces Round 701 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1485/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

map<pair<int,int>,int>dp;

void solve(vector<int>&nums,int k){
	int l,r;
	cin>>l>>r;
	if(dp[{l,r}]!=0){
		cout<<dp[{l,r}];
		return;
	}
	int a=1,b=0;
	int ans=0;
	for(int i=l;i<=r;i++){
		if(i==r){
			b=k;
		}
		else{
			b=nums[i+1]-1;
		}
		ans+=b-a;
		a=nums[i]+1;
	}
	dp[{l,r}]=ans;
	cout<<ans<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int n,t,k;
	cin>>n>>t>>k;
	vector<int>nums(n+1);
	for(int i=1;i<=n;i++)cin>>nums[i];
	while(t--)
		solve(nums,k);
	
	return 0;
}
