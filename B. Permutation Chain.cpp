// Problem: B. Permutation Chain
// Contest: Codeforces - Educational Codeforces Round 133 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1716/problem/B
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
		vector<int>nums(n);
		int k=1;
		for(int i=0;i<n;i++)nums[i]=k,k++;
		cout<<n<<"\n";
		int h=nums[n-1];
		for(int i=n-1;i>=0;i--)
		{
			for(int j=0;j<i;j++)
			{
				cout<<nums[j]<<" ";
			}
			cout<<h<<" ";
			for(int j=i;j<n-1;j++)
			{
				cout<<nums[j]<<" ";
			}
			cout<<"\n";
		}
	}
	
	return 0;
}
