// Problem: B. Young Explorers
// Contest: Codeforces - Codeforces Round 643 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1355/B
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
		int n;
		cin>>n;
		map<int,int>c;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			c[x]++;
		}
		int equipos=0,sobrantes=0;
		for(auto a:c){
			a.second+=sobrantes;
			sobrantes=0;
			equipos+=(a.second)/a.first;
			sobrantes+=a.second%a.first;
			//cout<<sobrantes<<" ";
		}
		cout<<equipos<<"\n";
	}
	
	return 0;
}
