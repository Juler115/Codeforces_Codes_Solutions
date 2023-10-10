// Problem: B. Pleasant Pairs
// Contest: Codeforces - Codeforces Round 728 (Div. 2)
// URL: https://codeforces.com/contest/1541/problem/B
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
	vector<int>nums(n+1);
	for(int i=1;i<=n;i++){
		cin>>nums[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n && i+j<2*n;j++){
			if(nums[i]*nums[j]==i+j)ans++;
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
