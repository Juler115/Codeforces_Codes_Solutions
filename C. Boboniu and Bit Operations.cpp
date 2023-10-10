// Problem: C. Boboniu and Bit Operations
// Contest: Codeforces - Codeforces Round 664 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1395/C
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
	int n,m;
	cin>>n>>m;
	vector<int>a(n),b(m);
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i];
	
	for(int k=0;k<=2e9;k++){
		int cnt=0;
		for(int i=0;i<n;i++){
		  for(int j=0;j<m;j++)
		      if(((a[i]& b[j])|k)==k) {cnt++;break;}
		}
		if(cnt==n){
			cout<<k;
			return 0;
		}
	}
	
	
	return 0;
}
