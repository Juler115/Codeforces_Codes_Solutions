// Problem: E. Nastya and Potions
// Contest: Codeforces - Codeforces Round 888 (Div. 3)
// URL: https://codeforces.com/contest/1851/problem/E
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

int create(vector<int>&dp,vector<int>&cost,vector<vector<int>>&mix,int x){

	if(dp[x]!=INT_MAX)return dp[x];
	else if(mix[x].size()==0){
		return dp[x]=cost[x];
	}
	else{
		int ans=0;
		for(auto a:mix[x]){
			ans+=create(dp,cost,mix,a);
		}
		return dp[x]=min(cost[x],ans);
	}
		
}

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int>dp(n,INT_MAX);
		vector<int>cost(n);
		for(int i=0;i<n;i++)cin>>cost[i];
		for(int i=0;i<k;i++){
			int x;
			cin>>x;
			x--;
			dp[x]=0;
		}
		vector<vector<int>>mix(n);
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			for(int j=0;j<x;j++){
				int a=0;
				cin>>a;
				a--;
				mix[i].push_back(a);
			}
		}
		for(int i=0;i<n;i++){
			if(dp[i]!=INT_MAX)continue;
			else{
				create(dp,cost,mix,i);
			}
		}
		for(auto a:dp)cout<<a<<" ";
		cout<<"\n";
		
		
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
