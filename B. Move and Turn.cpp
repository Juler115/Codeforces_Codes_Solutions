// Problem: B. Move and Turn
// Contest: Codeforces - Codeforces Round 691 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1459/B
// Memory Limit: 512 MB
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
	int n=0;
	cin>>n;
	vector<int>dp(n+1);
	dp[0]=0;
	dp[1]=4;
	dp[2]=4;
	int x=3,y=3,k=2;
	for(int i=3;i<=n;i++){
		if(i&1)dp[i]=(y*k)*2,y++,k++;
		else dp[i]=(x*x),x++;
	}
	cout<<dp[n];
	
	return 0;
}
