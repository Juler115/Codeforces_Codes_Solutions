// Problem: B. Sorted Adjacent Differences
// Contest: Codeforces - Codeforces Round 633 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1339/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back

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
		vector<int> nums(n);
		for(int i=0;i<n;i++)cin>>nums[i];
		sort(nums.begin(),nums.end());
		//for(auto a:nums)cout<<a<<" ";
		//cout<<"\n";
		vector<int>ans;
		int j=n-1;
		for(int i=0;i<(n+1)/2;i++,j--)
		{
			ans.pb(nums[i]);
			ans.pb(nums[j]);
		}
		//if(n%2!=0)ans.pb(nums[(n+2)/2]);
		if(n%2!=0)ans.pop_back();
		reverse(ans.begin(),ans.end());
		for(auto a:ans)cout<<a<<" ";
		cout<<"\n";
	}
	
	return 0;
}

