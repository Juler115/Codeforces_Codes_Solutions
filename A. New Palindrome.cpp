// Problem: A. New Palindrome
// Contest: Codeforces - Educational Codeforces Round 148 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1832/problem/0
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
	int t=0;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		vector<int>letras(26);
		for(auto a:s){
			letras[a-'a']++;
		}
		sort(letras.begin(),letras.end(),greater<int>());
		if(letras[0]>=2 && letras[1]>=2)cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}
