#include<bits/stdc++.h>
using namespace std;
#define pb push_back

unordered_map<int,int>pes;

void dfs(int cur,int par,unordered_map<int,vector<int>> adj)
{
	pes[cur]=1;
	for(auto i:adj[cur])
	{
		if(i!=par)
		{
			dfs(i,cur,adj);
			pes[cur]+=pes[i];
		}	
	}
}w

vector<int> subtreeProblem (int n, vector<vector<int>> edges, vector<int> queries)
{
	unordered_map<int,vector<int>> adj;
    for(auto a:edges)
    {
    	adj[a[0]].pb(a[1]);
    	adj[a[1]].pb(a[0]);	
    }
    dfs(1,0,adj);
    vector<int>pess;
    for(auto a:queries)
    {
    	pess.pb(pes[a]);
    }
    return pess; 
}



int main(){
	
	int n=5;
	vector<vector<int>> edges={
		{1,2},
		{1,3},
		{3,4},
		{3,5}
	};
	vector<int> queries={ 1, 3, 4, 5};
	vector<int> hola=subtreeProblem(n,edges,queries);
	for(auto a:hola)cout<<a<<" ";
	
	return 0;
}