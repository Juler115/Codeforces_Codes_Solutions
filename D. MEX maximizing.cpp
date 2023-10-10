// Problem: D. MEX maximizing
// Contest: Codeforces - Codeforces Round 615 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1294/D
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

const int N=1e6;

void solve(){
	
	int q=0,k;
	cin>>q>>k;
	vector<vector<int>>aux(N);
	int maxi=0,sig=0;
	while(q--)
	{
		int x;
		cin>>x;
		aux[x%k].push_back(1);
		while(aux[sig].size()!=0){
			maxi++;
			aux[sig].pop_back();
			sig++;
			sig%=k;
		}
		cout<<maxi<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
