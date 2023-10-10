// Problem: A. Gift Carpet
// Contest: Codeforces - Codeforces Round 894 (Div. 3)
// URL: https://codeforces.com/contest/1862/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,m;
	cin>>n>>m;
	vector<vector<char>>grid(n,vector<char>(m));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)cin>>grid[i][j];
	
	int ans=0;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(grid[j][i]=='v' && ans==0){
				ans++;
				break;
			}
			else if(grid[j][i]=='i' && ans==1){
				ans++;
				break;
			}
			else if(grid[j][i]=='k' && ans==2){
				ans++;
				break;
			}
			else if(grid[j][i]=='a' && ans==3){
				ans++;
				break;
			}
		}
	}	
	if(ans==4)cout<<"YES\n";
	else cout<<"NO\n";
	
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
