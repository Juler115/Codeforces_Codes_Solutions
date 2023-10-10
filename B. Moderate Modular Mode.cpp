// Problem: B. Moderate Modular Mode
// Contest: Codeforces - Codeforces Round 752 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1603/B
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


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		if(x==y)cout<<x<<"\n";
		else if(x>y){
			cout<<y+x<<"\n";
		}
		else{
			cout<< y - y % x / 2<<"\n";
		}
	}
	
	return 0;
}
