// Problem: A. Nastia and Nearly Good Numbers
// Contest: Codeforces - Codeforces Round 720 (Div. 2)
// URL: https://codeforces.com/contest/1521/problem/A
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

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(b==1)cout<<"NO\n";
		else{
			b*=b;
			cout<<"YES\n";
			cout<<1*a<<" "<<(b-1)*a<<" "<<b*a<<"\n";
		}
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
