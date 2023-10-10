// Problem: E. Round Dance
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/contest/1833/problem/E
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

const int N=1e6;
vector<vector<int>>g(N);
vector<bool> vis(N);
void clean(){
	g=vector<vector<int>>(N);
	vis=vector<bool>(N,false);
}

void dfs(int root){
	vis[root]=true;
	for(auto a:g[root]){
		if(!vis[a]){
			//cout<<a<<" ";
			dfs(a);
		}
	}
}



int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		clean();
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			g[i].push_back(x);
		}
		int maxi=0;
		for(int i=1;i<=n;i++){
			if(!vis[i]){
				maxi++;
				dfs(i);
				cout<<i<<" ";
				//cout<<"\n";
			}
		}
		cout<<"\n";
		cout<<0<<" "<<maxi<<"\n";
		
	}
	
	return 0;
}
