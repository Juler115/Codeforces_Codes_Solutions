// Problem: B. Red and Blue
// Contest: Codeforces - Educational Codeforces Round 101 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1469/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	vector<int>dp(201,0);
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		sum+=x;
		dp[i]=max(sum,dp[i-1]);
	}
	int m=0;
	cin>>m;
	sum=dp[n];
	for(int i=1+n;i<=m+n;i++){
		int x;
		cin>>x;
		sum+=x;
		dp[i]=max(sum,dp[i-1]);
	}
	cout<<dp[n+m]<<"\n";
	
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
