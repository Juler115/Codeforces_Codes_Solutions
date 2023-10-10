// Problem: A. Magnets
// Contest: Codeforces - Codeforces Round 200 (Div. 2)
// URL: https://codeforces.com/problemset/problem/344/A
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
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int ans=0;
	string ante="hola";
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s!=ante){
			ans++;
			ante=s;
		}
	}
	cout<<ans<<"\n";

	
	return 0;
}
