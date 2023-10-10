// Problem: A. System of Equations
// Contest: Codeforces - Codeforces Round 131 (Div. 2)
// URL: https://codeforces.com/problemset/problem/214/A
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
	int n,m;
	cin>>n>>m;
	int ans=0;
	for(int a=0;a<=100;a++){
		for(int b=0;b<=100;b++){
			if((a*a+b)==n && (a+b*b)==m)ans++;
		}
	}
	cout<<ans;
	
	return 0;
}
