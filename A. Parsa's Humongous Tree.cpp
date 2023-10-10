// Problem: A. Parsa's Humongous Tree
// Contest: Codeforces - Codeforces Round 722 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1528/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

const int N=1e5 +1;
#define f first
#define s second
int ans=0;

vector<vector<int>> graph(N);
vector<pair<int,int>>vals(N);
vector<bool>vis(N);

void clean(){
	vis.clear();
	graph.clear();
	vals.clear();
	ans=0;
}

void dfs(int root,bool sig){
	vis[root]=true;
	for(auto a:graph[root]){
		if(!vis[a]){
			if(sig){
				if(abs(vals[root].s-vals[a].s)>abs(vals[root].s-vals[a].f))
				{
					ans+=abs(vals[root].s-vals[a].s);
					dfs(a,1);
				}
				else{
					ans+=abs(vals[root].s-vals[a].f);
					dfs(a,0);
				}
			}
			else{
				if(abs(vals[root].f-vals[a].s)>abs(vals[root].f-vals[a].f))
				{
					ans+=abs(vals[root].f-vals[a].s);
					dfs(a,1);
				}
				else{
					ans+=abs(vals[root].f-vals[a].f);
					dfs(a,0);
				}
			}
		}
	}
	
}
void prim(int root){
	vis[root]=true;
	int aux=0,aux2=0;
	for(auto a:graph[root]){
		if(abs(vals[root].f-vals[a].s)>abs(vals[root].f-vals[a].f))
		aux+=abs(vals[root].f-vals[a].s);
		else{
			aux+=abs(vals[root].f-vals[a].f);
		}
	}
	for(auto a:graph[root]){
		if(abs(vals[root].s-vals[a].s)>abs(vals[root].s-vals[a].f))
		aux2+=abs(vals[root].s-vals[a].s);
		else{
			aux2+=abs(vals[root].s-vals[a].f);
		}
	}
	if(aux2>aux){
		ans+=aux2;
		for(auto a:graph[root]){
			if(abs(vals[root].s-vals[a].s)>abs(vals[root].s-vals[a].f))
			dfs(a,1);
			else{
				dfs(a,0);
			}
		}
	}
	else{
		ans+=aux;
		for(auto a:graph[root]){
			if(abs(vals[root].f-vals[a].s)>abs(vals[root].f-vals[a].f))
			dfs(a,1);
			else{
				dfs(a,2);
			}
		}
	}
}

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int t=0;
	cin>>t;
	while(t--){
		clean();
		int n;
		cin>>n;
		
		int x,y,l,r;
		for(int i=1;i<=n;i++){
			cin>>l>>r;
			vals[i]=make_pair(l,r);
		}
		for(int i=1;i<=n-1;i++)
		{
			cin>>x>>y;
			graph[x].push_back(y);
			graph[y].push_back(x);
		}
		int maxi=0;
		for(int i=1;i<=n;i++)
		{
			if(graph[i].size()>graph[maxi].size()){
				maxi=i;
			}
		}
		//for(auto a:graph[maxi])cout<<a<<" ";
		//cout<<maxi<<"\n";
		prim(maxi);
		for(int i=1;i<=n;i++)
		{
			graph[i].clear();
		}
		cout<<ans<<"\n";
			
	}
	
	return 0;
}
