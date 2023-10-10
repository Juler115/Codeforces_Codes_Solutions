// Problem: A. Linova and Kingdom
// Contest: Codeforces - Codeforces Round #635 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1336/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define maxn 200005

std::vector<int>conj[maxn];
int n,k,u,v,depth[maxn]={0},size[maxn]={0},det[maxn];
long long ans=0;

int cmp(int a,int b){return a>b;}

int dfs(int u,int f){depth[u]=depth[f]+1;size[u]=1;
	for (int i=0;i<conj[u].size();++i){
		if ((v=conj[u][i])==f)continue;
		size[u]+=dfs(v,u);
	}det[u]=size[u]-depth[u];return size[u];
}

int main(){
	std::cin>>n>>k;
	for (int i=1;i<n;++i){
		std::cin>>u>>v;
		conj[u].push_back(v);
		conj[v].push_back(u);
	}dfs(1,0);
	
	std::nth_element(det+1,det+n-k,det+n+1,cmp);
	for (int i=1;i<=n-k;++i)ans+=det[i];std::cout<<ans;
	return 0;
	}