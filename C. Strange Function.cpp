// Problem: C. Strange Function
// Contest: Codeforces - Codeforces Round 729 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1542/C
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


int lcm(int a,int b){
	return (a*b)/__gcd(a,b);
}

const int M=1e9+7;

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	int maxi=1000000008;
	int co=358708313;
	while(t--)
	{
		int n;
		cin>>n;
		
		cout<<lcm(7,12)<<"\n";
		
	}
	
	return 0;
}
