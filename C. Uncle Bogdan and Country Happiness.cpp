// Problem: C. Uncle Bogdan and Country Happiness
// Contest: Codeforces - Codeforces Round 660 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1388/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool access;

void dfs(vector<vector<int>>&gr,vector<int>&p,vector<int>&h,
		vector<int>&a,vector<int>&g,int v, int ancestor=-1){
			
	a[v] = p[v];
    int sum_g = 0;
    for (int to : gr[v]) {
        if (to == ancestor) continue;
        dfs(gr,p,h,a,g,to,v);
        sum_g += g[to];
        a[v] += a[to];
    }
    if ((a[v] + h[v]) % 2 == 0) {} // first
    else access = false;
    g[v] = (a[v] + h[v]) / 2;
    if (g[v] >= 0 && g[v] <= a[v]) {} // second
    else access = false;
    if (sum_g <= g[v]) {} // third
    else access = false;
}


void solve(){
	access=1;
	int n,m;
	cin>>n>>m;
	vector<vector<int>>g(n+1);
	vector<int>p(n+1),h(n+1);
	for(int i=1;i<=n;i++)cin>>p[i];
	for(int i=1;i<=n;i++)cin>>h[i];
	for(int i=0;i<n-1;i++){
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	vector<int>sumas(n+1);
	vector<int>ga(n+1);
	sumas[1]=m;
	dfs(g,p,h,sumas,ga,1);
	cout<<(access?"YES\n":"NO\n");
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
