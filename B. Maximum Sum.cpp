// Problem: B. Maximum Sum
// Contest: Codeforces - Educational Codeforces Round 148 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1832/problem/B
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
		int n,k;
		cin>>n>>k;
		vector<int>nums(n);
		int t=0;
		for(int i=0;i<n;i++)cin>>nums[i],t+=nums[i];
		sort(nums.begin(),nums.end());
		//for(auto a:nums)cout<<a<<" ";
		int i=1,j=n-1,ans=0;
		for(int p=0;p<k;p++)ans+=nums[n-(p+1)],j--;
		j++;
		ans=t-ans;
		int aux=ans;
		for(int p=0;p<k;p++,j++,i+=2){
			aux+=nums[j]-(nums[i]+nums[i-1]);
			ans=max(ans,aux);
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
