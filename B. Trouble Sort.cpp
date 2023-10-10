// Problem: B. Trouble Sort
// Contest: Codeforces - Codeforces Round 648 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1365/B
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
		int n;
		cin>>n;
		bool sort=true;
		int ceros=0,unos=0,ante=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x<ante){
				sort=false;
			}
			ante=x;
		}
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x==0)ceros++;
			else unos++;
		}
		if(sort || (unos!=0 && ceros!=0))cout<<"Yes\n";
		else cout<<"No\n";
	}
	
	return 0;
}
