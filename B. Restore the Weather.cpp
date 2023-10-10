// Problem: B. Restore the Weather
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/contest/1833/problem/B
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

bool compa(const pair<int,int>&a,
			const pair<int,int>&b){
	return a.s<b.s;	
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<pair<int,int>>a(n),b(n);
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			a[i]={x,i};
		}
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			b[i]={x,0};
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		for(int i=0;i<n;i++){
			b[i].s=a[i].s;
		}
		sort(b.begin(),b.end(),compa);
		for(auto x:b)cout<<x.f<<" ";
		cout<<"\n";
	}
	
	return 0;
}
