// Problem: D. Non-zero Segments
// Contest: Codeforces - Codeforces Round 674 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1426/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
	set<int>ceros;
	ceros.insert(0);
	int cur=0,ans=0;
	for(int i=0;i<n;i++)
	{
		cur+=nums[i];
		if(ceros.find(cur)!=ceros.end())
		{
			ans++;
			ceros.clear();
			ceros.insert(0);
			cur=nums[i];
		}
		ceros.insert(cur);
	}
	cout<<ans;
	
	return 0;
}
