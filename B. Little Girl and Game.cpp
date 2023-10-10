// Problem: B. Little Girl and Game
// Contest: Codeforces - Codeforces Round 169 (Div. 2)
// URL: https://codeforces.com/problemset/problem/276/B
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

void solve(){
	string s;
	cin>>s;
	vector<int>vis(26);
	for(auto a:s){
		vis[a-'a']++;
	}
	int ans=0;
	for(auto a:vis)if(a%2!=0)ans++;
	if(ans==0 || ans%2!=0)cout<<"First";
	else cout<<"Second";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
