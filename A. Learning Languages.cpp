// Problem: A. Learning Languages
// Contest: Codeforces - Codeforces Round 170 (Div. 1)
// URL: https://codeforces.com/problemset/problem/277/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
vector<bool> vis(100);
vector<int> g[101];

void dfs(int ini){
	vis[ini]=1;
	for(auto a:g[ini])
	{
		if(vis[a]==0)
		{
			dfs(a);
		}
	}
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n,m;
	cin>>n>>m;
	vector<int> habla[n];
	vector<int> idi[m];
	int tot=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		while(x--)
		{
			int id;
			cin>>id;
			idi[id-1].push_back(i);
			habla[i].push_back(id-1);
			tot++;
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(auto a:habla[i])
		{
			for(auto j:idi[a])
			{
				g[i].push_back(j);
			}
		}
	}
	if(tot==0)ans++;
	dfs(0);
	for(int i=0;i<n;i++)
	{
		if(vis[i]==0)
		{
			dfs(i);
			ans++;
		}
	}
	cout<<ans;
	
	return 0;
}
