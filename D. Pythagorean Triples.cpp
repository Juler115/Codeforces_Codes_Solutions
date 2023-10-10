// Problem: D. Pythagorean Triples
// Contest: Codeforces - Educational Codeforces Round 104 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1487/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

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
		int base=8;
		int ini=5;
		int ans=0;
		while(ini<=n)
		{
			ini+=base;
			base+=4;
			ans++;
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
