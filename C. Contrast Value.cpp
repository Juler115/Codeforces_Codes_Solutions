// Problem: C. Contrast Value
// Contest: Codeforces - Educational Codeforces Round 148 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1832/problem/C
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
		vector<int>nums(n);
		for(int i=0;i<n;i++)cin>>nums[i];
		int cosa=0;
		vector<int>sums;
		if(nums.size()==1)cosa=0;
		else for(int i=1;i<n;i++){
			cosa+=abs(nums[i-1]-nums[i]);
			if(nums[i-1]-nums[i]!=0)sums.push_back(nums[i-1]-nums[i]);
		}
		int ans=sums.size()+1;
		for(int i=1;i<sums.size();i++){
			if(sums[i-1]>0 && sums[i]>0)ans--;
			else if(sums[i-1]<0 && sums[i]<0)ans--;
		}
		//for(auto a:sums)cout<<a<<" ";
		//cout<<"\n";
		if(cosa==0)cout<<1<<"\n";
		else if(n==2)cout<<2<<"\n";
		else cout<<ans<<"\n";
		
	}
	
	return 0;
}
