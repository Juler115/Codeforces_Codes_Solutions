#include <bits/stdc++.h>

using namespace std;
#define pb push_back
unordered_map<int,bool>visitados;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n,m;
	cin>>n>>m;
	vector<int> adj[n+1];
	
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	priority_queue<int>q;
	q.emplace(-1*1);
	visitados[1]=true;
	while(!q.empty())
	{
		int x=q.top();
		x*=-1;
		cout<<x<<" ";
		q.pop();
		for(auto a: adj[x])
		{
			if(visitados[a]==false)
			{
				visitados[a]=true;
				q.emplace(-1*a);
			}
		}
	}
	
	
	return 0;
}
