// Problem: A. Matrix Game
// Contest: Codeforces - Codeforces Round 648 (Div. 2)
// URL: https://codeforces.com/contest/1365/problem/A
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
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<vector<int>>grid(n,vector<int>(m));
		int col=m,row=n;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>grid[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(grid[i][j]==1){
					row--;
					break;
				}
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(grid[j][i]==1){
					col--;
					break;
				}
			}
		}
		int ans=min(col,row);
		if(ans%2==0)cout<<"Vivek\n";
		else cout<<"Ashish\n";
	}
	
	return 0;
}
