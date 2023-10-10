// Problem: A. DZY Loves Sequences
// Contest: Codeforces - Codeforces Round #FF (Div. 1)
// URL: https://codeforces.com/problemset/problem/446/A
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

bool compare(const pair<int,int> &a,const pair<int,int> &b){
	int tam1=a.s-a.f+1;
	int tam2=b.s-b.f+1;
	return tam1>tam2;
}


int32_t main()
{
	int n;
	cin >> n;
	vector<long long> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	vector<vector<long long> > d(n+3);
	int p = 0;
	long long mxl = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int & j = i; j < n; ++j)
		{
			if (j == n-1 || v[j] >= v[j + 1])
			{
				d[p].push_back(v[j]);
				++p;
				mxl = max(mxl, (long long)d[p - 1].size());
				break;
			}
			else
			{
				d[p].push_back(v[j]);
			}
		}
	}
	if (mxl != n) mxl++;
	for (int i = 0; i < p; ++i)
	{
		if (d[i+1].size() == 0) break;
 
		long long l = d[i][d[i].size() - 1];
		long long r = d[i + 1][0];
		long long rr=1e9, ll=1e9;
		if (d[i + 1].size() == 1 && d[i + 2].size() != 0)
		{
			rr = d[i + 2][0];
		}
		else
		{
			if (d[i + 1].size() > 1)
				rr = d[i + 1][1];
		}
		if (d[i].size() > 1)
		{
			ll = d[i][d[i].size() - 2];
		}
		else
		{
			if (i-1 >= 0)
				ll = d[i - 1][d[i - 1].size() - 1];
		}
 
		if (r - ll > 1 || rr - l > 1)
		{
			mxl = max((long long)d[i].size() + d[i + 1].size(), mxl);
		}
	}
 
	cout << mxl;
 
}
