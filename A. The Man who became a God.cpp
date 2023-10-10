// Problem: A. The Man who became a God
// Contest: Codeforces - Codeforces Round 882 (Div. 2)
// URL: https://codeforces.com/contest/1847/problem/0
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

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int>nums(n);
		priority_queue<int>q;
		for(int i=0;i<n;i++)cin>>nums[i];
		for(int i=1;i<n;i++){
			q.push(abs(nums[i-1]-nums[i]));
		}
		k--;
		while(k--)q.pop();
		int ans=0;
		while(!q.empty()){
			ans+=q.top();
			q.pop();
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
