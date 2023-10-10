// Problem: C. Johnny and Another Rating Drop
// Contest: Codeforces - Codeforces Round 647 (Div. 2) - Thanks, Algo Muse!
// URL: https://codeforces.com/problemset/problem/1362/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
		int ans=0;
		int i=1;
		int n2=n;
		while(n)
		{
			if((n & 1)==1)ans++;
			n/=2;
		}
		cout<<2*n2-ans<<"\n";
	}
	
	return 0;
}
