// Problem: B1. Palindrome Game (easy version)
// Contest: Codeforces - Codeforces Round 721 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1527/B1
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ceros=0;
	for(auto a:s)if(a=='0')ceros++;
	if(n%2==0)cout<<"BOB\n";
	else{
		if(s[n/2]=='0' && ceros>1)cout<<"ALICE\n";
		else cout<<"BOB\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
