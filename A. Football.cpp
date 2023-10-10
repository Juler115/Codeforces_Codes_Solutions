// Problem: A. Football
// Contest: Codeforces - Codeforces Beta Round 77 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/96/A
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
    ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	char ante='a';
	int cant=0;
	bool pasa=0;
	for(auto a:s){
		if(a!=ante){
			ante=a;
			cant=1;
		}else cant++;
		if(cant>=7)pasa=1;
	}
	if(pasa)cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
