// Problem: A. Party
// Contest: Codeforces - Codeforces Beta Round 87 (Div. 1 Only)
// URL: https://codeforces.com/problemset/problem/115/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#define pb push_back

vector<int>vis(5000,0);
vector<vector<int>>g(5000);
int ans=1;

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int>padres;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(x==-1)padres.pb(i);
		else g[x].pb(i);
	}
	queue<int>q;
	//for(auto a:padres)cout<<a<<" ";
	//cout<<"\n";
	for(auto a:padres){
		q.push(a);
		vis[a]=1;
		ans=max(ans,vis[a]);
		while(!q.empty()){
			int x=q.front();
			//cout<<x<<" ";
			q.pop();
			for(auto b:g[x]){
				if(!vis[b]){
					q.push(b);
					vis[b]=vis[x]+1;
					ans=max(ans,vis[b]);
				}
			}
		}
	}
	cout<<ans<<"\n";
	
	
	return 0;
}
