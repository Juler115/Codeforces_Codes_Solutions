// Problem: A. Collecting Beats is Fun
// Contest: Codeforces - Codeforces Round 219 (Div. 2)
// URL: https://codeforces.com/problemset/problem/373/A
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
	vector<int>nums(10);
	bool pasa=1;
	for(int i=0;i<16;i++){
		char c;
		cin>>c;
		if(c!='.'){
			nums[c-'0']++;
			if(nums[c-'0']>2*n)pasa=false;
			//cout<<nums[c-'0']<<"\n";
		}
	}
	cout<<(pasa?"YES":"NO");
	
	return 0;
}
