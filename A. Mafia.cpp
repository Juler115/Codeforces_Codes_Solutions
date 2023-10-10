// Problem: A. Mafia
// Contest: Codeforces - Codeforces Round 202 (Div. 1)
// URL: https://codeforces.com/problemset/problem/348/A
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
	double n;
	cin>>n;
	vector<double>nums(n);
	double ans=0;
	int maxi=0;
	for(double i=0;i<n;i++)cin>>nums[i],ans+=nums[i],maxi=max(maxi,(int)nums[i]);
	int x=max((int)ceil(ans/(n-1)),maxi);
	cout<<x;
	
	
	
	return 0;
}
