// Problem: C. Minimum Ties
// Contest: Codeforces - Educational Codeforces Round 104 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1487/C
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
		bool pasa=1;
		for(int i=0;i<=((n+(n-1))/2);i++){
			if(n==2){
				cout<<0;
				break;
			}
			if(n%2==0 && (i==0 || i==((n+(n-1))/2)))cout<<0<<" ";
			else {
				cout<<(pasa?1:-1)<<" ";
			}
			pasa=!pasa;
		}
		cout<<"\n";
	}
	
	return 0;
}
