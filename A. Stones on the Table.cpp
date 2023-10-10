// Problem: A. Stones on the Table
// Contest: Codeforces - Codeforces Round 163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/A
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
	int n;
	cin>>n;
	int rep=0;
	char ante;
	while(n--)
	{
		char c;
		cin>>c;
		if(ante==c)
		{
			rep++;
			ante=c;
		}
		ante=c;
	}
	cout<<rep;	
	return 0;
}
