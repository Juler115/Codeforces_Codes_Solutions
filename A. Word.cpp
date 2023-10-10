// Problem: A. Word
// Contest: Codeforces - Codeforces Beta Round 55 (Div. 2)
// URL: https://codeforces.com/problemset/problem/59/A
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
	string s;
	cin>>s;
	int mayus=0,minus=0;
	for(auto a:s){
		if(a>='A' && a<='Z')mayus++;
		else minus++;
	}
	if(mayus>minus){
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		cout<<s;
	}else{
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout<<s;
	}
	
	return 0;
}
