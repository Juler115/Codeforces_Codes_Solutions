// Problem: E. Cyclic Components
// Contest: Codeforces - Codeforces Round 479 (Div. 3)
// URL: https://codeforces.com/problemset/problem/977/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
vector<int>g[1000000];
bool vis[1000000];
bool pasa=true;

bool dfs(int root,int ini)
{
	if(g[root].size()>2)pasa=false;
	if(g[root].size()<2)pasa=false;
	for(auto a:g[root])
	{
		if(!vis[a]){
			vis[a]=true;
			dfs(a,ini);
		}
	}
	return pasa;
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		pasa=true;
		if(!vis[i])
		{
			vis[i]=true;
			ans+=dfs(i,i);
		}
	}
	cout<<ans;
	
	return 0;
}

