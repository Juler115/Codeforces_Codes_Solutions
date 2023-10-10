// Problem: A. Escalator Conversations
// Contest: Codeforces - Codeforces Round 888 (Div. 3)
// URL: https://codeforces.com/contest/1851/problem/0
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,m,k,h;
		cin>>n>>m>>k>>h;
		vector<int>nums(n);
		for(int i=0;i<n;i++)cin>>nums[i];
		sort(nums.begin(),nums.end());
		set<int>exist;
		for(int i=2;i<=m;i++)exist.insert(i*k);
		int ans=0;
		for(int i=0;i<n;i++){
			int dif=abs(nums[i]-h);
			if(exist.find(k+dif)!=exist.end()){
				//cout<<nums[i]<<" ";
				ans++;
			}
		}
		cout<<ans<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
