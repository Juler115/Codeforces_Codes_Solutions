// Problem: A. Strange Table
// Contest: Codeforces - Codeforces Round 710 (Div. 3)
// URL: https://codeforces.com/contest/1506/problem/A
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
		int n,m,x;
		cin>>n>>m>>x;
		int c=ceil((double)x/n);
		int f=x%n;
		if(f==0)f=n;
		f--;
		cout<<f*m+c<<"\n";
	}
	
	return 0;
}
