// Problem: C. RationalLee
// Contest: Codeforces - Codeforces Round 652 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1369/C
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
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int>nums(n);
		vector<int>amigos(k);
		for(int i=0;i<n;i++)cin>>nums[i];
		for(int i=0;i<k;i++)cin>>amigos[i];
		int ans=0;
		int seg=n-1;
		sort(nums.begin(),nums.end());
		sort(amigos.begin(),amigos.end());
		
		int i=0;
		while(amigos[i]==1)
		{
			ans+=2*nums[seg];
			seg--;
			i++;
		}
		sort(amigos.begin(),amigos.end(),greater<int>());
		while(i--)amigos.pop_back();
		i=0;
		//cout<<i<<" "<<seg<<"\n";
		for(int j=0;j<amigos.size();j++)
		{
			int num=amigos[j];
			ans+=nums[seg];
			ans+=nums[i];
			i+=num-1;
			seg--;
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
