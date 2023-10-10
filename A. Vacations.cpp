// Problem: A. Vacations
// Contest: Codeforces - Codeforces Round 363 (Div. 1)
// URL: https://codeforces.com/problemset/problem/698/A
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
	int n;
	cin>>n;
	vector<vector<int>>dp(n+1,vector<int>(3,0));
	dp[0][0]=0;
	dp[0][1]=0;
	dp[0][2]=0;
	
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		dp[i][0]=max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
		if(x==2 || x==3)dp[i][1]=max(dp[i-1][0]+1,dp[i-1][2]+1);
		if(x==1 || x==3)dp[i][2]=max(dp[i-1][0]+1,dp[i-1][1]+1);
	}
	cout<<n-max(dp[n][0],max(dp[n][1],dp[n][2]));
	
	return 0;
}
