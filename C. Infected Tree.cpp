// Problem: C. Infected Tree
// Contest: Codeforces - Codeforces Round 798 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1689/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int n;
vector<vector<int>>g;
vector<int>dp;
int ans=0;

void clean(){
	g.resize(0);
	g.resize(n+1);
	dp.resize(n+1);
	ans=0;
}

int dfs(int x, int p=0){
	if(g[x].size()==0)return dp[x]=0;
	int cant=0;
	for(auto a:g[x]){
		if(a!=p)cant+=dfs(a,x)+1;
	}
	return dp[x]=cant;
}

int borra(int x,int p=0){
	vector<int>c;
	for(auto a:g[x])if(a!=p)c.push_back(a);
	if(c.size()==0)return 0;
	if(c.size()==1){
		return dp[c[0]];
	}
	else{
		return max(dp[c[1]]+ borra(c[0],x),dp[c[0]]+ borra(c[1],x));
	}
}



void solve(){
	cin>>n;
	clean();
	for(int i=1;i<n;i++){
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);			
	}
	dfs(1);
	//for(auto a:dp)cout<<a<<" ";
	//cout<<"\n";
	ans=borra(1,1);
	cout<<ans<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
