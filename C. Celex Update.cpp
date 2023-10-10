// Problem: C. Celex Update
// Contest: Codeforces - Codeforces Round 645 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1358/C
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
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<(x2-x1)*(y2-y1)+1<<"\n";
	}
	
	return 0;
}
