// Problem: B. Omkar and Last Class of Math
// Contest: Codeforces - Codeforces Round 655 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1372/B
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
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a=0,b=0;
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				a=n/i;
				b=n-a;
				break;
			}
		}
		if(a && b)cout<<a<<" "<<b<<"\n";
		else cout<<1<<" "<<n-1<<"\n";
	}
	
	return 0;
}
