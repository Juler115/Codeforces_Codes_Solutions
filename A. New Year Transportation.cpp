// Problem: A. New Year Transportation
// Contest: Codeforces - Good Bye 2014
// URL: https://codeforces.com/problemset/problem/500/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool pasa=false;
int N=3e4+1;
vector<bool>visited(N);
vector<int>vis(N);
void dfs(int t,int ini)
{
	if(visited[ini]==1)return;
	if(ini==t){
		pasa=true;
		return;
	}
	else{
		visited[ini]=1;
		if(vis[ini]>t)return;
		dfs(t,vis[ini]);
	}
	
}
int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n,t;
	cin>>n>>t;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		vis[i]=i+x;
	}
	dfs(t,1);
	if(pasa)cout<<"YES";
	else cout<<"NO";
	return 0;
}
