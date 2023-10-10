// Problem: B. Array Walk
// Contest: Codeforces - Educational Codeforces Round 92 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1389/B
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
		int n,k,z;
		cin>>n>>k>>z;
		vector<int> a(n+1),cs(n+1);
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			cs[i]=a[i]+cs[i-1];
		}
		
		int ind,mx=0;
		for(int i=1;i<=k;i++)
		{
			int repeat=min(z,(k-i+1)/2);
			int extra=repeat*(a[i]+a[i+1]);
			int end=k+1-(2*repeat);
			int sum=cs[end]+extra;
			mx=max(sum,mx);
		}
		cout<<mx<<endl;
	}
	
	return 0;
}
