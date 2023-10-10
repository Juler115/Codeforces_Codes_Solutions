// Problem: C. Circle of Monsters
// Contest: Codeforces - Educational Codeforces Round 85 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1334/C
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
#define mk make_pair
#define s second
#define f first


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		set<pair<int,pair<int,int>>>mons;
		vector<int>damage(n);
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			mons.insert(mk(x,mk(-1*y,i)));
		}
		for(auto a:mons)
		{
			cout<<a.f<<" "<<-1*a.s.f<<" "<<a.s.s<<"\n";
		}
		
	}
	
	return 0;
}
