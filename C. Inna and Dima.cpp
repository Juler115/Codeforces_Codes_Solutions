// Problem: C. Inna and Dima
// Contest: Codeforces - Codeforces Round 220 (Div. 2)
// URL: https://codeforces.com/problemset/problem/374/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

const int N=1e3+10;
int n,m;

vector<vector<int>>grid(N,vector<int>(N,-1)),vis(N,vector<int>(N,-1)),aux(N,vector<int>(N,-1));
int aux2=0,ans=0;

int val(char c){
	switch(c){
		case 'D':return 1;
		case 'I':return 2;
		case 'M':return 3;
		case 'A':return 4;
	}
}

bool check(int i,int j,int profu){
	return (vis[i][j]!=-1 && profu-vis[i][j]>=3);
}

void dfs(int i,int j,int next,int profu){
	if(next==5)aux2++,next=1;
	vis[i][j]=max(vis[i][j],profu);
	if((vis[i-1][j]!=-1 && profu-vis[i-1][j]>=3) || 
		(vis[i][j-1]!=-1 && profu-vis[i][j-1]>=3) ||
		(vis[i][j+1]!=-1 && profu-vis[i][j+1]>=3) ||
		(vis[i+1][j]!=-1 && profu-vis[i+1][j]>=3)){
		aux2=-1;
		return;
	}
	if(grid[i-1][j]==next && check(i-1,j,profu))dfs(i-1,j,next+1,profu+1);
	if(grid[i][j-1]==next && check(i-1,j,profu))dfs(i,j-1,next+1,profu+1);
	if(grid[i][j+1]==next && check(i-1,j,profu))dfs(i,j+1,next+1,profu+1);
	if(grid[i+1][j]==next && check(i-1,j,profu))dfs(i+1,j,next+1,profu+1);
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char c;
			cin>>c;
			grid[i][j]=val(c);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(grid[i][j]==1){
				dfs(i,j,2,0);
				ans=max(ans,aux2);
				if(aux2==-1){
					ans=-1;
					goto fin;
				}
				goto fin;
				aux2=0;
			}
		}
	}
	fin:;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<vis[i][j]<<" ";
		}
		cout<<"\n";
	}
	if(ans==-1)cout<<"Poor Inna!";
	else if(ans==0)cout<<"Poor Dima!";
	else cout<<ans;
	
	return 0;
}
