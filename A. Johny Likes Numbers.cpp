// Problem: A. Johny Likes Numbers
// Contest: Codeforces - Educational Codeforces Round 13
// URL: https://codeforces.com/problemset/problem/678/A
// Memory Limit: 256 MB
// Time Limit: 500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,k;
	cin>>n>>k;
	cout<<((n/k)+1)*k;
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	//int t=0;
	//cin>>t;
	//while(t--)
		solve();
	
	return 0;
}
