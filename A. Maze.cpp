// Problem: A. Maze
// Contest: Codeforces - Codeforces Round 222 (Div. 1)
// URL: https://codeforces.com/problemset/problem/377/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

vector<char>g[5000];
int vis[5000][5000];
void dfs(int x,int y,int &n,int &m,int &k)
{
	if(k==0)return;
	vis[x][y]=1;
	k--;
	if(x>0 && !vis[x-1][y])if(g[x-1][y]=='.')dfs(x-1,y,n,m,k);
	if(x<n-1 && !vis[x+1][y])if(g[x+1][y]=='.')dfs(x+1,y,n,m,k);
	if(y>0 && !vis[x][y-1])if(g[x][y-1]=='.')dfs(x,y-1,n,m,k);
	if(y<m-1 && !vis[x][y+1])if(g[x][y+1]=='.')dfs(x,y+1,n,m,k);
}
int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n,m,k;
	cin>>n>>m>>k;
	int cant=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			char x;
			cin>>x;
			if(x=='.')cant++;
			g[i].push_back(x);
		}
	}
	k=cant-k;
	bool pasa=false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(g[i][j]=='.'){
				dfs(i,j,n,m,k);
				pasa=true;
				break;
			}
		}
		if(pasa)break;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(g[i][j]=='.' && !vis[i][j])g[i][j]='X';
			cout<<g[i][j];
		}
		cout<<"\n";
	}
	
	
	return 0;
}
