// Problem: A. Bear and Friendship Condition
// Contest: Codeforces - VK Cup 2017 - Round 1
// URL: https://codeforces.com/problemset/problem/771/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> g[150005];
bool vis[150005];
bool pasa=true;

void dfs(int root, int parent) {
    vis[root]=1;
    if(g[root]!=g[parent]){
        pasa=false;
    }
    for(auto a:g[root]) {
        if(!vis[a]){
            dfs(a, root);
        }
    }
}

int32_t main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++) {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
    	g[i].push_back(i);
    	sort(g[i].begin(),g[i].end());
    }
    for(int i=1;i<=n;i++) {
        if(!pasa) break;
        if(g[i].size()==1) continue;
        if(!vis[i]) dfs(i,i);
    }
    if(pasa) cout<<"YES";
    else cout<<"NO";
    return 0;
}

