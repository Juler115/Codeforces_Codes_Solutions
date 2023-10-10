// Problem: B. New Theatre Square
// Contest: Codeforces - Educational Codeforces Round 88 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1359/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	vector<vector<int>>dp(n+1,vector<int>(m+1));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char c;
			cin>>c;
			if(c=='.'){
				dp[i][j]=-1;
			}
			else{
				dp[i][j]=INT_MIN;
			}
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(dp[i][j]==-1){
				if(j<m-1 && dp[i][j+1]==-1){
					dp[i][j]=dp[i][j+1]=min(2*x,y);
					ans+=min(2*x,y);
				}
				else{
					dp[i][j]=x;
					ans+=x;
				}
			}
			
		}
	}
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
