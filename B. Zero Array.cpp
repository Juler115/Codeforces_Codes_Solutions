// Problem: B. Zero Array
// Contest: Codeforces - Codeforces Round 577 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1201/B
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
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	sort(nums.begin(),nums.end());
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=nums[i];
	}
	if(sum%2==0 && nums[n-1]<=sum-nums[n-1])cout<<"YES";
	else cout<<"NO";
	
	
	return 0;
}
