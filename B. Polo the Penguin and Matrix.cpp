// Problem: B. Polo the Penguin and Matrix
// Contest: Codeforces - Codeforces Round 177 (Div. 2)
// URL: https://codeforces.com/problemset/problem/289/B
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
	int n,m,d;
	cin>>n>>m>>d;
	int mn=10000000;
	vector<int>nums(n*m);
	int ans=0;
	for(int i=0;i<n*m;i++)
	{
		cin>>nums[i];

	}
	sort(nums.begin(),nums.end());
	mn=nums[nums.size()/2];
	
	for(int i=0;i<n*m;i++)
	{
		int a=nums[i];
		//cout<<(a-mn)/d<<"\n";
		if(mn==a)continue;
		if((a-mn)%d == 0)ans+=abs((a-mn)/d);
		else {
			cout<<-1;
			return 0;
		}
	}
	cout<<ans;
	
	return 0;
}
