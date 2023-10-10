// Problem: A. Coder
// Contest: Codeforces - Codeforces Round 225 (Div. 2)
// URL: https://codeforces.com/problemset/problem/384/A
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
	bool pasa=0;
	if(n%2!=0)pasa=!pasa;
	if(n%2==0)cout<<(n*n)/2<<"\n";
	else{
		cout<<(n*n)/2 +1<<"\n";
	}
	for(int i=0;i<n;i++){
		if(n%2==0)pasa=!pasa;
		for(int j=0;j<n;j++){
			cout<<(pasa?"C":".");
			pasa=!pasa;
		}
		cout<<"\n";
	}
	
	return 0;
}
