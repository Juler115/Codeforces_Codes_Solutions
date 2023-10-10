// Problem: C. Game on Permutation
// Contest: Codeforces - Educational Codeforces Round 153 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1860/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	vector<int>dp(n+1,0);
	dp[0]=0;
	set<int>ganas={INT_MAX};
	set<int>pierdes={nums[0]};
	for(int i=1;i<n;i++){
		if(*ganas.begin()>nums[i] && *pierdes.begin()<nums[i]){
			dp[i]=1;
			ganas.insert(nums[i]);
		}
		else{
			dp[i]=0;
			pierdes.insert(nums[i]);
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)ans+=dp[i];
	cout<<ans<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
