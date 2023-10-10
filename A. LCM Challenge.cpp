// Problem: A. LCM Challenge
// Contest: Codeforces - Codeforces Round 146 (Div. 1)
// URL: https://codeforces.com/problemset/problem/235/A
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
	int n;
	cin>>n;
	if(n==1)cout<<1;
	else if(n==2)cout<<2;
	else if(n==3)cout<<6;
	else{
		if(n%2!=0){
			cout<<(n)*(n-1)*(n-2);
		}
		else if(n%3==0)cout<<(n-1)*(n-2)*(n-3);
		else cout<<(n)*(n-1)*(n-3);
	}
	
	return 0;
}
