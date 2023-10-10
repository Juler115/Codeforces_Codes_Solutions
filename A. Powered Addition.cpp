// Problem: A. Powered Addition
// Contest: Codeforces - Codeforces Round 633 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1338/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

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
		int ans=0;
		for(int i=1;i<n;i++)
		{
			if(nums[i]<nums[i-1])
			{
				ans=max(ans,nums[i-1]-nums[i]);
				nums[i]=nums[i-1];
			}
		}
		cout<<(int)ceil(log2(ans+1))<<"\n";
	}
	
	return 0;
}
