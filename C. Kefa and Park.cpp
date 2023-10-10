// Problem: C. Kefa and Park
// Contest: Codeforces - Codeforces Round 321 (Div. 2)
// URL: https://codeforces.com/problemset/problem/580/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
//#define int long long int
vector<int> adj[1000000];
bool gato[1000000];
int ans=0;
int gatos[1000000];
vector<int> vis(1000000);
int vis2[10000000];
int n,m;

void encuentragatos(int root)
{
	if(gatos[root]>m)return;
	if(adj[root].size()==1 && root!=1)ans++;
	for(auto a:adj[root])
	{
		if(!vis2[a]){
			vis2[a]=1;
			encuentragatos(a);
		}
	}
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>gato[i];
	for(int i=1;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	queue<int>vert;
	vert.push(1);
	if(gato[1]==1)gatos[1]=1;
	vis[1]=1;
	while(!vert.empty())
	{
		int x=vert.front();
		vert.pop();
		for(auto a:adj[x])
		{
			if(!vis[a]){
				if(gato[a]==1)gatos[a]=gatos[x]+1;
				else gatos[a]=0;
				vert.push(a);
				vis[a]=1;
			}
		}
	}
	//for(int i=1;i<=n;i++)cout<<gatos[i]<<" ";
	encuentragatos(1);
	cout<<ans;
	
	
	return 0;
}
