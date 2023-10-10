#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#define pb push_back

vector<vector<int>>t(500);
vector<set<int>>b(500);

int dis(int root,bool p,int n)
{
	if(!p){
		queue<int>q;
		vector<int>vis(500,-1);
		vis[root]=0;
		q.push(root);
		while(!q.empty()){
			int x=q.front();
			q.pop();
			for(auto a:t[x]){
				if(vis[a]==-1){
					vis[a]=vis[x]+1;
					q.push(a);
					if(a==n)return vis[a];
				}
			}
		}
	}
	else{
		queue<int>q;
		vector<int>vis(500,-1);
		vis[1]=0;
		q.push(root);
		while(!q.empty()){
			int x=q.front();
			q.pop();
			for(auto a:b[x]){
				if(vis[a]==-1){
					vis[a]=vis[x]+1;
					q.push(a);
					if(a==n)return vis[a];
				}
			}
		}
	}
	return -1;
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j)continue;
			b[i].insert(j);
		}
	}
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		t[x].pb(y);
		t[y].pb(x);
		b[x].erase(y);
		b[y].erase(x);
	}
	if(b[1].find(n)!=b[1].end()){
		cout<<dis(1,0,n);
	}
	else cout<<dis(1,1,n);
	
	return 0;
}
