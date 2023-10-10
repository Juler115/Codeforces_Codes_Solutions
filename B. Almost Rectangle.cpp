// Problem: B. Almost Rectangle
// Contest: Codeforces - Codeforces Round 713 (Div. 3)
// URL: https://codeforces.com/contest/1512/problem/B
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


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<vector<char>>grid(n,vector<char>(n));
		int a=-1,b=0,c=0,d=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>grid[i][j];
				if(grid[i][j]=='*' && a==-1){
					a=i;
					b=j;
				}else if(grid[i][j]=='*'){
					c=i;
					d=j;
				}
			}
		}
		if(a==c){
			if(a>0){
				grid[a-1][b]='*';
				grid[c-1][d]='*';
			}
			else{
				grid[a+1][b]='*';
				grid[c+1][d]='*';
			}
		}
		else if(b==d){
			if(b>0){
				grid[a][b-1]='*';
				grid[c][b-1]='*';
			}
			else{
				grid[a][b+1]='*';
				grid[c][b+1]='*';
			}
		}
		else{
			grid[c][b]='*';
			grid[a][d]='*';
		}
		for(auto a:grid){
			for(auto b:a){
				cout<<b;
			}
			cout<<"\n";
		}
		//cout<<"\n";
		
	}
	
	return 0;
}
