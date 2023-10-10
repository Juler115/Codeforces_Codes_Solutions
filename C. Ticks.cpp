// Problem: C. Ticks
// Contest: Codeforces - Codeforces Round 744 (Div. 3)
// URL: https://codeforces.com/contest/1579/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


bool solve(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<vector<int>>grid(n,vector<int>(m));
	vector<vector<int>>vis(n,vector<int>(m,1));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char c;
			cin>>c;
			if(c=='*'){
				grid[i][j]=1;
				vis[i][j]=0;	
			}
			else grid[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!vis[i][j]){
				int a=i,b=j;
				while(a>=0 && b>=0){
					if(!grid[a][b]){
						a++;
						b++;
						break;
					}
					a--;
					b--;
				}
				a++,b++;
				int dis=0;
				while(a<n && b<m){
					if(!grid[a][b])break;
					vis[a][b]=1;
					a++;
					b++;
					dis++;
				}
				a--;
				b--;
				int dis2=0;
				while(a>=0 && b<m){
					if(!grid[a][b])break;
					vis[a][b]=1;
					a--;
					b++;
					dis2++;
				}
				for(auto a:vis){
					for(auto b:a)cout<<b;
					cout<<"\n";
				}
				cout<<"\n";
				//if(dis!=dis2 || dis<=k)return 0;
			}
		}
	}
	return 1;
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
		if(solve())cout<<"YES\n";else cout<<"NO\n";
	
	return 0;
}
