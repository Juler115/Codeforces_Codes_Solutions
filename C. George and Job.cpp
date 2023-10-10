// Problem: C. George and Job
// Contest: Codeforces - Codeforces Round 267 (Div. 2)
// URL: https://codeforces.com/problemset/problem/467/C
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
	int n,m,k;
	cin>>n>>m>>k;
	vector<int>nums(n);
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	sort(nums.begin(),nums.end());
	int ans=0;
	int j=0,i=0;
	for(;i<m;i++){
		ans+=nums[i];
	}
	cout<<ans<<"\n";
	int aux=ans;
	for(;i<n;i++,j++){
		cout<<aux<<" ";
		aux=aux-nums[j]+nums[i];
		ans=max(ans,aux);
	}
	//cout<<ans<<"\n";
	
	return 0;
}
