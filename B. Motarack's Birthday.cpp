// Problem: B. Motarack's Birthday
// Contest: Codeforces - Codeforces Round 619 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1301/B
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
		int n;
		cin>>n;
		int mini=1e10,maxi=-1e10;
		vector<int>nums(n);
		for(int i=0;i<n;i++)cin>>nums[i];
		int k=0,m=0;
		for(int i=0;i<n;i++)
		{
			if(i>0 && nums[i-1]!=-1 && nums[i]==-1){
				maxi=max(maxi,nums[i-1]);
				mini=min(mini,nums[i-1]);
			}
			if(i<n-1 && nums[i+1]!=-1 && nums[i]==-1)
			{
				maxi=max(maxi,nums[i+1]);
				mini=min(mini,nums[i+1]);
			}
		}
		k=(mini+maxi)/2;
		for(int i=0;i<n;i++)
		{
			if(nums[i]==-1)nums[i]=k;
		}
		for(int i=0;i<n-1;i++)
		{
			m=max(m,abs(nums[i]-nums[i+1]));
		}
		if(mini==1e10 && maxi==-1e10)m=0,k=1;
		cout<<m<<" "<<k<<"\n";
		//cout<<mini<<" "<<maxi<<"\n";
	}
	
	return 0;
}
