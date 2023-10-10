// Problem: E. Gardener and Tree
// Contest: Codeforces - Codeforces Round 748 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1593/E
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<set<int>>g(n+1);
		for(int i=0;i<n-1;i++){
			int x,y;
			cin>>x>>y;
			g[x].insert(y);
			g[y].insert(x);
		}
		//get the leafs
		queue<int>leaf,aux;
		for(int i=1;i<=n;i++){
			if(g[i].size()<=1)leaf.push(i);
		}
		aux=leaf;
		//delete all the leafs, and add the new leafs, save the q on ans
		vector<int>ans(n+1);
		int i=0;
		while(!aux.empty()){
			leaf=aux;
			while(!aux.empty())aux.pop();
			while(!leaf.empty()){
				int x=leaf.front();
				leaf.pop();
				for(auto a:g[x]){
					g[a].erase(x);
					if(g[a].size()<=1)aux.push(a);
				}
				ans[i]++;
			}
			i++;
		}
		int num=n;
		for(int i=0;i<k && i<=n;i++)num-=ans[i];
		cout<<(num==-1?0:num)<<"\n";
		
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
