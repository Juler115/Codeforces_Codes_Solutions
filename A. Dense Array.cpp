// Problem: A. Dense Array
// Contest: Codeforces - Codeforces Round 702 (Div. 3)
// URL: https://codeforces.com/contest/1490/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

//function to check the condition
bool pasa(double a,double b)
{
	if((max(a,b)/min(a,b))<=2)return true;
	return false;
}

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
		vector<int>nums;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			nums.push_back(x);
		}
		double ans=0;
		for(int i=0;i<n-1;i++)
		{
			double a=nums[i],b=nums[i+1];
			if(!pasa(a,b) && a<b)
			{
				while(a<b && !pasa(a,b))
				{
					ans++;
					a*=2;
				}
			}
			else if(!pasa(a,b) && a>b)
			{
				while(a>b && !pasa(a,b))
				{
					ans++;
					a/=2;
				}
			}
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
