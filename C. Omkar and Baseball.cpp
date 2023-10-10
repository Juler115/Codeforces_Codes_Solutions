// Problem: C. Omkar and Baseball
// Contest: Codeforces - Codeforces Round 655 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1372/C
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
		int ini=0,fin=n;
		bool pasa=0,pasa2=0;
		vector<int>nums(n);
		for(int i=0;i<n;i++)
		{
			cin>>nums[i];
		}
		for(int i=0;i<n;i++)
		{
			if(nums[i]==i+1)ini++;
			else break;
		}
		for(int i=n-1;i>=0;i--)
		{
			if(nums[i]==i+1)fin--;
			else break;
		}
		for(int i=ini;i<fin;i++)
		{
			if(nums[i]<nums[i+1])
			{
				pasa=true;
			}
			if(nums[i]==i+1)pasa2=true;
		}
		if(pasa && pasa2)cout<<2<<"\n";
		else if(pasa)cout<<1<<"\n";
		else cout<<0<<"\n";
	}
	
	return 0;
}
