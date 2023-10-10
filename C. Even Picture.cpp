// Problem: C. Even Picture
// Contest: Codeforces - Codeforces Global Round 8
// URL: https://codeforces.com/problemset/problem/1368/C
// Memory Limit: 512 MB
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
	int k=0;
	cout<<(n-1)*3 + 7<<"\n";
	cout<<0<<" "<<0+k<<"\n";
	cout<<1<<" "<<0+k<<"\n";
	cout<<0<<" "<<1+k<<"\n";
	cout<<1<<" "<<1+k<<"\n";
	cout<<2<<" "<<1+k<<"\n";
	cout<<1<<" "<<2+k<<"\n";
	cout<<2<<" "<<2+k<<"\n";
	k=1;
	for(int i=0;i<n-1;i++){
		cout<<2+k<<" "<<1+k<<"\n";
		cout<<1+k<<" "<<2+k<<"\n";
		cout<<2+k<<" "<<2+k<<"\n";
		k++;
	}
	
	return 0;
}
