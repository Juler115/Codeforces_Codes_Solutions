// Problem: D. Min Cost String
// Contest: Codeforces - Educational Codeforces Round 107 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1511/D
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
	int n,k;
	cin>>n>>k;
	bool prim=0;
	if(k>1)prim=1;
	int aux=0;
	string ans;
	int i=1;
	while(ans.size()<n){
		for(int i=0;i<k;i++){
			for(int j=i+1;j<k;j++){
				ans+=
			}
		}
	}
	cout<<ans<<"\n";
	
	return 0;
}
