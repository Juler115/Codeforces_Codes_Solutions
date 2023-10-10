// Problem: C1. Simple Polygon Embedding
// Contest: Codeforces - Educational Codeforces Round 87 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1354/C1
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
const double pi=3.141592653589793;

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    cout.precision(1000);
	int t=0;
	cin>>t;
	while(t--)
	{
		double n;
		cin>>n;
		double ap=1/(2*tan(pi/(n*2)));
		cout<<ap*2<<"\n";
	}
	
	return 0;
}
