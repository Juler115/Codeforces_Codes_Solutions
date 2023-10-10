// Problem: C. Checkposts
// Contest: Codeforces - Codeforces Round 244 (Div. 2)
// URL: https://codeforces.com/problemset/problem/427/C
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
const int MOD=1e9+7;



vector<vector<int>>g(N);
vector<bool>vis(N,0);
vector<int>cost;

bool compa(const int &a,const int &b){
	return cost[a-1]>cost[b-1];
}
priority_queue<int,vector<int>, decltype(&compa)>pq(compa);


int ans=0,repe=1;

int t=0;
vector<int>disc(N,-1);
vector<int>low(N,-1);
stack<int>st;
vector<bool>stm(N,0);

void eva(){
	//if(!pq.empty())return;
	int min=cost[pq.top()-1];
	int cant=1;
	pq.pop();
	while(!pq.empty()){
		if(cost[pq.top()-1]==min)cant++;
		pq.pop();
	}
	ans+=min;
	repe*=cant;
	repe%=MOD;
}



void tarjan(int v){
	disc[v] =low[v] = ++t;
	st.push(v);
	stm[v]=true;
	
	for(auto u:g[v]){
		if(disc[u]==-1){
			tarjan(u);
			low[v]= min(low[u],low[v]);		
		}
		else if (stm[u] == true)
            low[v] = min(low[v], disc[u]);
	}
	int w = 0; 
    if (low[v] == disc[v]) {
        while (st.top() != v) {
            w = (int)st.top();
            vis[w]=true;
            pq.push(w);
            //cout<<w<<" ";
            stm[w] = false;
            st.pop();
        }
        w = (int)st.top();
        vis[w]=true;
        //cout<<w<<"\n";
        pq.push(w);
        stm[w] = false;
        st.pop();
        eva();
    }	
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		cost.push_back(x);
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			tarjan(i);
		}
	}
	cout<<ans<<" "<<repe;
	
	
	return 0;
}
