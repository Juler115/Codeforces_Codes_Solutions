// Problem: A. Remove Smallest
// Contest: Codeforces - Codeforces Round #661 (Div. 3)
// URL: https://codeforces.com/contest/1399/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
#define pb push_back


int main()
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
		vector<int> nums;
		bool pasa=1;
		for(int i=0;i<n;++i)
		{
			int aux;
			cin>>aux;
			nums.pb(aux);
		}
		sort(nums.begin(),nums.end());
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;++j)
			{
				if(i==j)continue;
				if(nums[i]==0) break;
				if(nums[j]==0) continue;
				if(abs(nums[i]-nums[j])>1)pasa=0;
				else
				{
					if(nums[i]<nums[j])nums[i]=0;
					else nums[j]=0;
				}
			}
		}
		if(pasa)cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}
