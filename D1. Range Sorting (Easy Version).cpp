// Problem: D1. Range Sorting (Easy Version)
// Contest: Codeforces - Codeforces Round 873 (Div. 2)
// URL: https://codeforces.com/contest/1828/problem/D1
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
		vector<int>nums(n);
		for(int i=0;i<n;i++)cin>>nums[i];
		int ans=0,auxs=0;
		for(int i=0;i<n;i++){
			vector<int>aux(nums.begin()+0,nums.begin()+i);
			vector<int>aux2(nums.begin()+0,nums.begin()+i);
			sort(aux.begin(),aux.end());
			if(aux2!=aux)ans+=(i-0);
		}
		for(int i=0;i<n;i++){
			vector<int>aux(nums.begin()+i,nums.begin()+n-1);
			vector<int>aux2(nums.begin()+i,nums.begin()+n-1);
			sort(aux.begin(),aux.end());
			if(aux2!=aux)ans+=(n-1-i);
		}

		
		cout<<max(ans,auxs)<<"\n";
	}
	
	return 0;
}
