// Problem: B. Ternary String
// Contest: Codeforces - Educational Codeforces Round 87 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1354/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	vector<int>dp(4,-1);
	int ans=INT_MAX;
	string s;
	cin>>s;
	int i=1;
	for(auto a:s){
		dp[a-'0']=i;
		i++;
		if(dp[1]>0 && dp[2]>0 && dp[3]>0){
			int leg=max(dp[1],max(dp[2],dp[3]))-min(dp[1],min(dp[2],dp[3]))+1;
			ans=min(ans,leg);
		}
	}
	cout<<(ans==INT_MAX?0:ans)<<"\n";
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
