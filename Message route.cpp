#include <bits/stdc++.h>

using namespace std;
#define pb push_back


int messageRoute(int n, vector<vector<int>>edges){
    
    
    unordered_map<int,vector<int>> adj;
    unordered_map<int,int> dist;

    queue<int> bfs;
    unordered_map<int,bool> vis;
    for(int i=1;i<=n;i++)dist[i]=-1;
    for(auto a:edges)
    {
    	adj[a[0]].pb(a[1]);
    	adj[a[1]].pb(a[0]);
    }
    	
    dist[1]=0;
    bfs.push(1);
    vis[1]=1;
    while(!bfs.empty()){
			int f = bfs.front();
			bfs.pop();
			for(auto nbr : adj[f]){
				if(!vis[nbr]){
					bfs.push(nbr);
					dist[nbr] = dist[f] + 1;
					vis[nbr] = true;
				}
			}
		}
	if(dist[n]==-1)return -1;
	else return dist[n]+1;
}



int main(){
	
	int n=5;
	vector<vector<int>> edges={
		{1,2},
		{1,3},
		{1,4},
		{2,3},
		{5,4}
	};
	
	
	cout<<messageRoute(n,edges);
	
	return 0;
}