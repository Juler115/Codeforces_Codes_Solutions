// Problem: D. Armchairs
// Contest: Codeforces - Educational Codeforces Round 109 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1525/D
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n;
	cin>>n;
	vector<int>p;
	vector<int>u;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(!x)u.push_back(i);
		else p.push_back(i);
	}
	for(auto a:p)cout<<a<<" ";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
	return 0;
}
