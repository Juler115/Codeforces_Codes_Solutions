// Problem: A. Rudolph and Cut the Rope
// Contest: Codeforces - Codeforces Round 883 (Div. 3)
// URL: https://codeforces.com/contest/1846/problem/0
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
		int n;
		cin>>n;
		int ans=n;
		for(int i=0;i<n;i++){
			int a,x;
			cin>>a>>x;
			if(x>=a)ans--;
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
