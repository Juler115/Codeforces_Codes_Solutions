// Problem: E1. Rudolf and Snowflakes (simple version)
// Contest: Codeforces - Codeforces Round 883 (Div. 3)
// URL: https://codeforces.com/contest/1846/problem/E1
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

long long powr(long long a,long long  b)
	{
		long long res=1;
		while(b){
			if(b&1) res *=a;
			a*=a;
			b/=2;
		}
		return res;
	}
	
void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		n--;
		for(int i=2;i<1000;i++){
			if(i*i+i==n){
				cout<<"YES\n";
				goto fin;
			}
		}
		cout<<"NO\n";
		fin:;
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
