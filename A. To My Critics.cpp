// Problem: A. To My Critics
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/A
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
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b>=10 || a+c>=10 || b+c>=10)cout<<"YES\n";
		else cout<<"NO\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
