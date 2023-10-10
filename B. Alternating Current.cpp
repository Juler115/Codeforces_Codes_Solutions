// Problem: B. Alternating Current
// Contest: Codeforces - Codeforces Round 200 (Div. 1)
// URL: https://codeforces.com/problemset/problem/343/B
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
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	stack<char>pila;
	for(auto a:s){
		if(!pila.empty() && pila.top()==a){
			pila.pop();
		}
		else pila.push(a);
	}
	cout<<(pila.empty()?"Yes":"No");
	
	return 0;
}
