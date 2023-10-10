// Problem: A. Filling Shapes
// Contest: Codeforces - Codeforces Round 566 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1182/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<int>dp(61);

void solve(){
	int n;
	cin>>n;
	dp[0]=1;
	for(int i=1;i<=60;i++){
		if(i%2==0)dp[i]=dp[i-2]*2;
		else dp[i]=0;
	}
	cout<<dp[n];
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
