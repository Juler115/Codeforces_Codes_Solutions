// Problem: E. Split Into Two Sets
// Contest: Codeforces - Codeforces Round 805 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1702/E
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

bool solve(){
	
	int n;
	cin>>n;
	vector<vector<int>>g(n+1);
	vector<int>repe(n+1,0);
	bool pasa=1;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		repe[x]++;repe[y]++;
		if(repe[x]>2 || repe[y]>2)pasa=0;
		if(x==y)pasa=0;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	if(!pasa)return 0;
	vector<int>vis(n+1,0);
	queue<int>q;
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			q.push(i);
			vis[i]=1;
			while(!q.empty()){
				auto x=q.front();
				q.pop();
				for(auto a:g[x]){
					if(vis[a]==0){
						vis[a]=vis[x]+1;
						q.push(a);
						break;
					}
					if(a==i && vis[x]%2!=0)return 0;
				}
			}
		}
	}
	/*for(int i=1;i<=n;i++){
		cout<<vis[i]<<" ";
	}
	cout<<"\n";*/
	return 1;
	
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		cout<<(solve()?"YES\n":"NO\n");
	}
	
	return 0;
}
