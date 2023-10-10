// Problem: F. Equalize the Array
// Contest: Codeforces - Codeforces Round 702 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1490/F
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
		map<int,int>nums;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			nums[x]++;
		}
		map<int,int>repe;
		int cost=0,acum=0,ans=10000000,cant=0,ante=0;
		for(auto a:nums){
			repe[a.second]++;
		}
		for(auto a:repe)cost+=a.first*a.second;
		ans=min(ans,cost+acum);
		for(auto it=repe.end();it!=repe.begin();it--)
		{
			if(it==repe.end())continue;
			acum+=cant*(ante-it->first);	
			cost-=it->first*it->second;
			ans=min(ans,cost+acum);
			cant+=it->second;
			ante=it->first;
			//cout<<cost<<" "<<acum<<"\n";		
		}
		acum+=cant*(ante-repe.begin()->first);	
		cost-=repe.begin()->first*repe.begin()->second;
		ans=min(ans,cost+acum);
		//for(auto a:repe)cout<<a.first<<" "<<a.second<<"\n";
		//cout<<cost<<"\n";
		cout<<ans<<"\n";
		//cout<<"\n";
		
		
	}
	
	return 0;
}
