// Problem: B. Taxi
// Contest: Codeforces - VK Cup 2012 Qualification Round 1
// URL: https://codeforces.com/problemset/problem/158/B
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n;
	cin>>n;
	map<int,int> g;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		g[x]++;
	}
	int ans=0;
	//for(auto a:g)cout<<a.first<<" "<<a.second<<"\n";
	for(int i=0;i<100000;i++)
	{
		while(g[i]>0)
		{
			//cout<<ans<<" ";
			//cout<<i<<" "<<g[i]<<"\n";
			ans++;
			g[i]-=1;
			int res=4-i;
			int ini=res;
			while(res && ini>0)
			{
				if(g[ini]>0 && res>=ini)
				{
					//cout<<res<<"\n";
					g[ini]-=1;
					res-=ini;
				}
				else ini--;
			}
		}
	}
	cout<<ans;
	
	
	
	return 0;
}
