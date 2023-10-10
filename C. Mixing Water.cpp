// Problem: C. Mixing Water
// Contest: Codeforces - Educational Codeforces Round 88 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1359/C
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

double ans=0;

double form(int h,int c, int t,int k){
	return ((k+1)*h+k*c)/(2*k+1);
}

double bina(int h,int c, int t){
	
	if(t<=(double)(h+c)/2)return 2;
	else{
		int a = h - t;
		int b = 2 * t - c - h;
		int k = 2 * (a / b) + 1;
		long long val1 = abs(k / 2 * 1ll * c + (k + 1) / 2 * 1ll * h - t * 1ll * k);
		long long val2 = abs((k + 2) / 2 * 1ll * c + (k + 3) / 2 * 1ll * h - t * 1ll * (k + 2));
		return (val1 * (k + 2) <= val2 * k ? k : k + 2);
	}
}


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		ans=0;
		int h,t,c;
		cin>>h>>c>>t;
		cout<<bina(h,c,t)<<"\n";
	}
	
	return 0;
}
