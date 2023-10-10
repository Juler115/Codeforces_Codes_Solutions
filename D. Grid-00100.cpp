// Problem: D. Grid-00100
// Contest: Codeforces - Codeforces Round 654 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1371/D
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
		int n,k;
		cin>>n>>k;
		if(k%n==0){
			cout<<0<<"\n";
		}
		else cout<<2<<"\n";
		
		vector<vector<int>>grid(n,vector<int>(n,0));
		int j=0,i=0;
		bool pasa=true;
		for(int h=0;h<n;h++){
			i=0;
			j=h;
			for(int p=0;p<n;i++,j++,p++){
				if(j==n)j=0;
				if(k==0){
					pasa=false;
					break;
				}
				k--;
				grid[i][j]=1;
			}
			if(!pasa)break;	
		}
		for(auto a:grid){
			for(auto b:a){
				cout<<b<<"";
			}
			cout<<"\n";
		}
	}
	
	return 0;
}
