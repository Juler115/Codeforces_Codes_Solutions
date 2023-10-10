// Problem: B. Fox and Cross
// Contest: Codeforces - Codeforces Round 228 (Div. 2)
// URL: https://codeforces.com/problemset/problem/389/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")


int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<vector<int>>grid(n,vector<int>(n,0));
	int cant=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			char c;
			cin>>c;
			if(c=='#')grid[i][j]=1,cant++;
			else grid[i][j]=0;
		}
	}
	for(int i=1;i<n-1;i++){
		for(int j=1;j<n-1;j++){
			if(grid[i][j]==1){
				if(grid[i-1][j]==1 && grid[i+1][j]==1 && grid[i][j-1]==1 && grid[i][j+1]==1){
					cant-=5;
					grid[i-1][j]=grid[i+1][j]=grid[i][j-1]=grid[i][j+1]=grid[i][j]=0;
				}
			}
		}
	}
	if(cant==0)cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
