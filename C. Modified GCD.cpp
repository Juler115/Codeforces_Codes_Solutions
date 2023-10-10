// Problem: C. Modified GCD
// Contest: Codeforces - Codeforces Beta Round 67 (Div. 2)
// URL: https://codeforces.com/problemset/problem/75/C
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
	int a,b;
	cin>>a>>b;
	set<int>divi;
	for(int i=1;i<=__gcd(a,b);i++){
		if(a%i==0 && b%i==0)divi.insert(i);
	}
	for(auto a:divi)cout<<a<<" ";
	cout<<"\n";
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		auto it=divi.upper_bound(r);
		auto maxi=it;
		--it;
		if(maxi==divi.end() && (*it>r || *it<l))cout<<-1<<"\n";
		else if((*it>r || *it<l))cout<<-1<<"\n";
		else cout<<*it<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
