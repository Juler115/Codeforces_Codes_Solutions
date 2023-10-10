// Problem: B. Archer
// Contest: Codeforces - Codeforces Round 185 (Div. 2)
// URL: https://codeforces.com/problemset/problem/312/B
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


int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
    cout.precision(1e6);
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	double ans=a/b;
	double ini=1-a/b;
	for(int i=0;i<100000;i++){
		ini*=(1-c/d)*(a/b);
		ans+=ini;
		ini/=(a/b);
		ini*=(1-a/b);
	}
	cout<<ans<<"\n";
	
	return 0;
}
