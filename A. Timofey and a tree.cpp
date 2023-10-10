// Problem: A. Timofey and a tree
// Contest: Codeforces - Codeforces Round 395 (Div. 1)
// URL: https://codeforces.com/problemset/problem/763/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int N=1e6;

vector<vector<int>>g(N);
vector<bool>vis(N,0);

void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++){
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	vector<int>color(n+1);
	for(int i=1;i<=n;i++)cin>>color[i];
	//for(auto a:color)cout<<a<<" ";
	
	queue<int>q;
	q.push(1);
	int malo1=1,malo2=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		vis[x]=1;
		for(auto a:g[x]){
			if(!vis[a]){
				q.push(a);
				//cout<<a<<"\n";
				//cout<<malo1<<" "<<malo2<<"\n";
				if(color[a]!=color[x] && malo1==1 && malo2==1){
					malo1=x;
					malo2=a;
				}
				else if(color[a]!=color[x] && malo2!=x && malo1!=x){
					cout<<"NO\n";
					return;
				}
			}	
		}
	}
	int mal1=0,mal2=0;
	for(auto a:g[malo1]){
		if(color[a]!=color[malo1])mal1++;
	}
	for(auto a:g[malo2]){
		if(color[a]!=color[malo2])mal2++;
	}
	
	cout<<"YES\n";
	cout<<(mal1<mal2?malo2:malo1);
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
	return 0;
}
