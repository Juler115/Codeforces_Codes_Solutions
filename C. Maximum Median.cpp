// Problem: C. Maximum Median
// Contest: Codeforces - Codeforces Round 577 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1201/C
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
	
	int n,k;
	cin>>n>>k;
	vector<int> nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	sort(nums.begin(),nums.end());
	int rep=0,i=(n)/2,mid=nums[i];
	for(;i<n;i++)
	{
		//cout<<nums[i]<<" "<<mid<<"\n";
		if(nums[i]==mid)
		{
			rep++;
		}
		else{
			if(((nums[i]-mid)*rep)<=k)
			{
				k-=(nums[i]-mid)*rep;
				mid=nums[i];
				rep++;
			}
		}
	}
	//cout<<k<<" "<<mid<<"\n";
	while(k)
	{
		if((1)*rep<=k)
		{
			k-=(1)*rep;
			mid++;
		}
		else{
			break;
		}
	}
	cout<<mid;
	
	return 0;
}
