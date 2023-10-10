// Problem: C. Two Arrays
// Contest: Codeforces - Educational Codeforces Round 80 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1288/C
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

const int mod=1e9+7;

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	int ans=1;
	for(int i=1;i<=n;i++){
		ans*=(((i)%mod)*m)%mod;
		ans%=mod;
	}
	cout<<ans<<"\n";
	
	return 0;
}
