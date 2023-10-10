// Problem: A. Row GCD
// Contest: Codeforces - Codeforces Round 691 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1458/A
// Memory Limit: 512 MB
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
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	vector<int>a(n),b(m);
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i];
	
	int gcd=0;
	for(int i=1;i<n;i++){
		gcd=__gcd(gcd,abs(a[i]-a[0]));
	}
	int aux=0;
	for(int i=0;i<m;i++){
		aux=__gcd(gcd,a[0]+b[i]);
		cout<<aux<<" ";
	}
	
	return 0;
}
