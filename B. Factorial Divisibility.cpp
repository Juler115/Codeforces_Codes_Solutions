// Problem: B. Factorial Divisibility
// Contest: Codeforces - Codeforces Round 829 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1753/B
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
	int n,x;
	cin>>n>>x;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	bool pasa=true;
	int i=0;
	for(i=1;i<=x;i++){
		for(int j=0;j<n;j++){
			if(nums[j]<i)pasa=false;
		}
		if(!pasa)break;
	}
	cout<<(i==n?"Yes":"No");
	
	return 0;
}
