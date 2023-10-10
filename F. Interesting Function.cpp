// Problem: F. Interesting Function
// Contest: Codeforces - Codeforces Round 725 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1538/F
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
		int l,r;
		cin>>l>>r;
		int base=1;
		int ansl=0,ansr=0;
		while(l)
		{
			ansl+=(l%10)*base;
			l/=10;
			base*=10;
			base++;
		}
		base=1;
		while(r)
		{
			ansr+=(r%10)*base;
			r/=10;
			base*=10;
			base++;
		}
		cout<<ansr-ansl<<"\n";
	}
	
	return 0;
}
