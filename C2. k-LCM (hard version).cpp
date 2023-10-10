// Problem: C2. k-LCM (hard version)
// Contest: Codeforces - Codeforces Round 708 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1497/C2
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
#define pb push_back


void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int>ans(k-3,1);
		n-=k-3;
		if (n % 2 == 1) ans.pb(1),ans.pb(n/2),ans.pb(n/2);
    	else if (n % 4 == 0) ans.pb(n/2),ans.pb(n/4),ans.pb(n/4);
    	else if (n % 2 == 0) ans.pb(2),ans.pb(n/2 -1),ans.pb(n/2 -1);
		for(auto a:ans)cout<<a<<" ";
		cout<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
